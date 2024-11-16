// server.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define MAX_PACKET_SIZE 150  // Limit packet size to 150 bytes

// Function declarations
int create_server_socket();
void bind_server_socket(int server_fd, struct sockaddr_in *address);
int accept_client_connection(int server_fd, struct sockaddr_in *address);
void handle_client(int client_socket);
void close_server_socket(int server_fd);

int main() {
    int server_fd, client_socket;
    struct sockaddr_in address;
    
    server_fd = create_server_socket();
    bind_server_socket(server_fd, &address);

    while (1) {
        client_socket = accept_client_connection(server_fd, &address);
        handle_client(client_socket);
    }

    close_server_socket(server_fd);
    return 0;
}

// Function to create the server socket
int create_server_socket() {
    // TODO: Implement server socket creation
    int server_fd = socket(AF_INET, SOCK_DGRAM, 0); //AF_INET specifies IPv4, SOCK_DGRAM specifies UDP
    if (server_fd < 0) { //If the server file descriptor is less than 1, then the socket was not created
        perror("Socket creation failed.");
        exit(EXIT_FAILURE);
    }
    else {
        printf("Socket creation successful");
    }
    return server_fd;
}

// Function to bind the server socket to an address and port
void bind_server_socket(int server_fd, struct sockaddr_in *address) {
    // TODO: Implement binding the server socket to an address
    memset(address, 0, sizeof(*address));
    address->sin_family = AF_INET;
    address->sin_addr.s_addr = INADDR_ANY;
    address->sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)address, sizeof(*address)) < 0) {
        perror("Bind failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }
}

// Function to accept client connections
int accept_client_connection(int server_fd, struct sockaddr_in *address) {
    // TODO: Implement accepting client connection
    // You this is where you keep state related to the client. This might be useful for retransmission.
    return 0;
}

// Function to handle communication with the client
void handle_client(int client_socket) {
    // TODO: Implement the logic to receive and send data to the client
}

// Function to close the server socket
void close_server_socket(int server_fd) {
    // TODO: Implement closing the server socket
}
