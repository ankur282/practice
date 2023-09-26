#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#define PORT 8080
#define BUFFER_SIZE 1024

int main()

{

    int serverSocket, newSocket, valRead;
    struct sockaddr_in serverAddress, clientAddress;
    int opt = 1;
    int addressLength = sizeof(serverAddress);
    char buffer[BUFFER_SIZE] = {0};
    char message[BUFFER_SIZE] = {0};

    // Create server socket
    if ((serverSocket = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror ("Socket creation failed");
        exit (EXIT_FAILURE);
    }
    printf ("Socket successfully created.\n");

   

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = inet_addr("127.0.0.1");
    serverAddress.sin_port = htons(PORT);
    // Bind


    if (bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) < 0)

    {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }
    printf("Socket successfully binded.\n");

    // Listen for connections


    if (listen(serverSocket, 3) < 0)

    {
        perror("Listen failed");
        exit(EXIT_FAILURE);
    }
    printf("Server listening...\n");

    // Accept incoming connection


    if ((newSocket = accept(serverSocket, (struct sockaddr *)&clientAddress, (socklen_t *)&addressLength)) < 0)

    {
        perror("Accept failed");
        exit(EXIT_FAILURE);
    }
    printf("Server accepted the client...\n");

    // Start chat
    while (1)
    {
        // Read message from client
        valRead = read(newSocket, buffer, BUFFER_SIZE);
        printf("Client: %s\n", buffer);
        int i=atoi(buffer);
        i--;
        sprintf(buffer,"%d",i);

        // Send server message to client
        send(newSocket, buffer, strlen(buffer), 0);

    }

    // Close sockets
    close (newSocket);
    close (serverSocket);

    return 0;


}
