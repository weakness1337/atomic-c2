#include "headers/headers.h"


void Connections(int port)
{
	printf("Port: %d\n", port);

	int socketfd, AcceptionSocket, yes = 1;
	socklen_t acceptlen;
	struct sockaddr_in addr, acceptaddr;
	
	addr.sin_family = AF_INET; 
	addr.sin_port = htons(port);
	addr.sin_addr.s_addr = INADDR_ANY;

	if((socketfd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("Couldn't Create Con Port Socket\n");
		sleep(4);
		abort();
	}

	if(setsockopt(socketfd, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(yes)) == -1)
	{
		perror("Couldn't Set the socket option to re use the binded socket\n");
		sleep(4);
		abort();
	}

	if(bind(socketfd, (struct sockaddr *)&addr, sizeof(addr)) < 0)
	{
		perror("Couldn't Bind To The Con Port\n");
		sleep(4);
		abort();
	}
	if(listen(socketfd, 5) == -1)
	{
		perror("Couldn't Set the socket to listening\n");
		sleep(4);
		abort();
	}

	acceptlen = sizeof(acceptaddr);
	while(1)
	{

		usleep(1000);
		AcceptionSocket = accept(socketfd, (struct sockaddr *)&acceptaddr, &acceptlen);
		if(AcceptionSocket < 0) perror("Error Accepting Connection\n");
		pthread_t thread;
		pthread_create(&thread, NULL, (void *)AtomicCNC, (void *)&AcceptionSocket);
	}
}