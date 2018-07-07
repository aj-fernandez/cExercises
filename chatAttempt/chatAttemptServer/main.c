#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <strings.h>

#define PORT 2018
#define BACKLOG 2 // Number of allowed connections

int main() {

    int fDesc1, fDesc2;
    int sin_size;

    struct sockaddr_in server, client;

    fDesc1=socket(AF_INET, SOCK_STREAM, 0); // socket() return a socket descriptor

    //Fill struct sockaddr_in for server

    server.sin_family = AF_INET; //  type of addresses that socket can handle, IPv4 addresses at this case
    server.sin_port = htons(PORT); // store in memory in Network Byte Order (most significant byte first)
    // useful for little-endian(ess) because big-endian(ess) device already store numbers
    // in this way by default, most significant byte first (Host Byte Order).
    // (hexadecimal order!! )


    server.sin_addr.s_addr = INADDR_ANY; // defined in <in.h> as ((in_addr_t) 0x00000000)
    bzero(&(server.sin_zero),8); //set to '\0', it could have been done with memset()

    bind(fDesc1, (struct sockaddr *)&server, sizeof(struct sockaddr)); // bind the socket info with file descriptor

    listen(fDesc1, BACKLOG); // file descriptor associated with the socket set to listen at port defined on BACKLOG

    sin_size = sizeof(struct sockaddr_in);
    fDesc2 = accept(fDesc1, (struct sockaddr *)&client, &sin_size); // (struct sockaddr *)&client is a pointer to struct
    // sockaddr_in that contains client IP address and
    // port.
    // &sin_size, set to sizeof(struct sockaddr) better

    send(fDesc2, "Your connection attempt its accepted by the server of ajfernandez", 78, 0);


    return 0;
}