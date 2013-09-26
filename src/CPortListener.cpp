#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
 
#include "CPortListener.h"

// -------------------------------------------------------------------------
// static ListenToPort
int CPortListener::ListenToPort(int _PortNumber)
{
	char msg[] = "Hello World!\n";

	struct sockaddr_in Dest;					/* socket info about the machine connecting to us */
	struct sockaddr_in Serv;					/* socker intfo about our server */
	int 			MySocket;					/* socket used to listen for incoming connections */
	socklen_t 		SockSize = sizeof(struct sockaddr_in);

	memset(&Serv, 0, sizeof(Serv));				/* Zero struct before filling the fields */
	Serv.sin_family 		= AF_INET;			/* set the type of connection to TCP/IP */
	Serv.sin_addr.s_addr 	= htonl(INADDR_ANY);	/* set our address to any interface*/
	Serv.sin_port 			= htons(_PortNumber);	/* set the server to port number */

	MySocket = socket(AF_INET, SOCK_STREAM, 0);

	/* bin serv information to mysocket */
	bind(MySocket, (struct sockaddr*) &Serv, sizeof(struct sockaddr));

	/* start listening, allowing a queue of up to 1 pending connection */
	listen(MySocket, 1);
	int ConSocket = accept(MySocket, (struct sockaddr*) &Dest, &SockSize);

	while(ConSocket)
	{
		printf("Incoming connection from %s - sending welcome\n", inet_ntoa(Dest.sin_addr));
		send(ConSocket, msg, strlen(msg), 0);
		ConSocket = accept(MySocket, (struct sockaddr*) &Dest, &SockSize);
	}

	close(ConSocket);
	close(MySocket);

	return EXIT_SUCCESS;
}
// -------------------------------------------------------------------------