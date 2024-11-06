#ifndef COMPONENTHANDLER_H
#define COMPONENTHANDLER_H

#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPRequestHandlerFactory.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/JSON/Object.h>
#include <iostream>
/// @brief ComponentHandler class
/// @details This class is responsible for handling the request
class ComponentHandler : public Poco::Net::HTTPRequestHandler {
public:
    void handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response) override {
        response.setStatus(Poco::Net::HTTPResponse::HTTP_OK);
        response.setContentType("application/json");

        Poco::JSON::Object jsonResponse;
        jsonResponse.set("message", "Component Management System!");

        std::ostream& ostr = response.send();
        jsonResponse.stringify(ostr);
    }
};
/// @brief ComponentHandlerFactory class
/// @details This class is responsible for creating the request handler

class ComponentHandlerFactory : public Poco::Net::HTTPRequestHandlerFactory {
public:
    Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest& request) override {
        return new ComponentHandler();
    }
};

#endif // COMPONENTHANDLER_H
