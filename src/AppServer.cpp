#include "AppServer.h"
#include "ComponentHandler.h" 
#include <Poco/Net/HTTPServer.h>
#include <Poco/Net/ServerSocket.h>
#include <Poco/Net/HTTPServerParams.h>
#include <iostream>

/// @brief Constructor


AppServer::AppServer() {}

/// @brief Start the server
void AppServer::startServer() {
    Poco::Net::HTTPServer s(new ComponentHandlerFactory, Poco::Net::ServerSocket(8080), new Poco::Net::HTTPServerParams);
    s.start();
    std::cout << "Server running on port 8080" << std::endl;
    std::cin.get();
    s.stop();
}


