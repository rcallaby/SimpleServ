#include <gtest/gtest.h>
#include "../request_handler.h"
#include <string>

class MockRequestHandler : public RequestHandler {
public:
    explicit MockRequestHandler(int client_sock) : RequestHandler(client_sock) {}
    void handleGetRequest() override {
        sendResponse("Mock Response");
    }
};

TEST(RequestHandlerTest, SendResponseTest) {
    int fake_socket = 0; // Replace with a valid test socket descriptor if needed
    MockRequestHandler handler(fake_socket);

    // Simulate response handling
    ASSERT_NO_THROW(handler.handleRequest());
}
