#ifndef _GREETER_CLIENT_H_
#define _GREETER_CLIENT_H_

#include <google/protobuf/stubs/common.h>

#ifdef BAZEL_BUILD
#include "../protos/greeter.grpc.pb.h"
#else
#include "greet.grpc.pb.h"
#endif


using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using embassy::GreetRequest;
using embassy::GreetResponse;

class GreeterClient{
    public:
    GreeterClient(std::shared_ptr<Channel> channel);

    std::string SayHi(const std::string& user);
    private:
        std::unique_ptr<embassy::Greet::Stub> stub_;
};

#endif