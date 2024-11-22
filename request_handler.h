#ifndef REQUEST_HANDLER_H
#define REQUEST_HANDLER_H

#include <string>

class RequestHandler {
public:
    explicit RequestHandler(int client_sock);
    virtual ~RequestHandler();
    
    virtual void handleRequest();
    
protected:
    void sendResponse(const std::string &response);
    virtual void handleGetRequest() = 0;  // Virtual method for handling GET requests

    int client_sock;
};

#endif
