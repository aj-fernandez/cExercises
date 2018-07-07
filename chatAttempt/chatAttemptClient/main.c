/* argument needed: IP (server) */

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h> // sockaddr, sockaddr_in structs
#include <netdb.h> // hostent struct
#include <strings.h> // bzero()
#include <unistd.h> // close()

#define PORT 2018 // remote server port
#define MAXDATASIZE 100 // data max in bytes



int main(int argc, char *argv[]) {

    int fDesc;
    long numBytes; // really with int would be worth
    char buf[MAXDATASIZE]; // to store received data

    struct hostent *hEntServer; // it will receive the info about remote server
    struct sockaddr_in server;

    hEntServer = gethostbyname(argv[1]);

    fDesc = socket(AF_INET, SOCK_STREAM, 0);

    server.sin_family = AF_INET;
    server.sin_port = htons(PORT); // Always htons() to convert int to NetworkByteOrder (most significant bit first)
    // as big-endian(ness) !!!!  <<<<------
    server.sin_addr = *((struct in_addr *)hEntServer->h_addr); //direction stored at hostent->h_addr to server info struct

    bzero(&(server.sin_zero),8);

    connect(fDesc, (struct sockaddr *)&server, sizeof(struct sockaddr));

    numBytes = recv(fDesc, buf, MAXDATASIZE, 0);

    buf[MAXDATASIZE] = '\0';

    printf("Message from remote server: %s.\n", buf);

    close(fDesc);



    return 0;
}