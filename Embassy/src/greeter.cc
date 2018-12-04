#include <iostream>
#include <memory>

#include <grpcpp/grpcpp.h>
#include "greeter.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using embassy::GreetRequest;
using embassy::GreetResponse;

GreeterClient::GreeterClient(std::shared_ptr<Channel> channel)
    : stub_(embassy::Greet::NewStub(channel)) {}

std::string GreeterClient::SayHi(const std::string& user) {
    GreetRequest request;
    request.set_name(user);

    GreetResponse response;

    ClientContext context;

    Status status = stub_->SayHi(&context, request, &response);

    // Act upon its status.
    if (status.ok()) {
        return response.response();
    } else {
        std::cout << status.error_code() << ": " << status.error_message()
                    << std::endl;
        return "RPC failed";
    }
}

