#include <iostream>
#include <memory>
#include <string>

#include <include/grpcpp/grpcpp.h>

#ifdef BAZEL_BUILD
#include "../protos/greeter.grpc.pb.h"
#else
#include "greet.grpc.pb.h"
#endif

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using embassy::GreetRequest;
using embassy::GreetResponse;
using embassy::Greet;

// Logic and data behind the server's behavior.
class GreeterServiceImpl final : public Greet::Service {
  Status SayHi(ServerContext* context, const GreetRequest* request,
                  GreetResponse* reply) override {
    std::string hello("Hello ");
    reply->set_response(hello + request->name());
    return Status::OK;
  }
};

void RunServer() {
  std::string server_address("0.0.0.0:50051");
  GreeterServiceImpl service;

  ServerBuilder builder;

  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);

  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;
 
  server->Wait();
}

int main(int argc, char** argv) {
  RunServer();

  return 0;
}
