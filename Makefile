CXX = g++
CXXFLAGS = -std=c++11 -Wall
LDFLAGS =

SRCS = main.cpp server.cpp request_handler.cpp file_handler.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = http_server

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $(EXEC) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
