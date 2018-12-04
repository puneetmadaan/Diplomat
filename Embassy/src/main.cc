#include <iostream>

#include <grpcpp/grpcpp.h>
#include "greeter.h"


int main() {
  GreeterClient greeter(grpc::CreateChannel(
      "localhost:50051", grpc::InsecureChannelCredentials()));
  std::string user("world");
  std::string reply = greeter.SayHi(user);
  std::cout << "Greeter received: " << reply << std::endl;

  return 0;
}
