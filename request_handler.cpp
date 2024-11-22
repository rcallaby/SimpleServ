#include "request_handler.h"
#include <unistd.h>
#include <iostream>

RequestHandler::RequestHandler(int client_sock) : client_sock(client_sock) {}

RequestHandler::~RequestHandler() {}

void RequestHandler::sendResponse(const std::string &response) {
    send(client_sock, response.c_str(), response.size(), 0);
}

void RequestHandler::handleRequest() {
    char buffer[1024];
    recv(client_sock, buffer, sizeof(buffer), 0);
    std::string request(buffer);

    if (request.find("GET") == 0) {
        handleGetRequest();
    }
    close(client_sock);
}
