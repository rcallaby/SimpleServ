#include "file_handler.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <unistd.h>

FileHandler::FileHandler(int client_sock, const std::string &path) 
    : RequestHandler(client_sock), file_path(path) {}

void FileHandler::handleRequest() {
    std::ifstream file(file_path, std::ios::in | std::ios::binary);

    if (file) {
        sendFile();
    } else {
        send404();
    }
}

void FileHandler::sendFile() {
    std::ifstream file(file_path, std::ios::in | std::ios::binary);
    std::ostringstream buffer;
    buffer << file.rdbuf();
    std::string file_content = buffer.str();

    std::string http_response = 
        "HTTP/1.1 200 OK\r\n"
        "Content-Length: " + std::to_string(file_content.size()) + "\r\n"
        "Content-Type: application/octet-stream\r\n\r\n" + 
        file_content;
    send(client_socket, http_response.c_str(), http_response.size(), 0);
}

void FileHandler::send404() {
    std::string http_response = 
        "HTTP/1.1 404 Not Found\r\n"
        "Content-Length: 0\r\n"
        "Content-Type: text/plain\r\n\r\n";
    send(client_socket, http_response.c_str(), http_response.size(), 0);
}

