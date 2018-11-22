package(default_visibility = ["//visibility:public"])

cc_library(
    name = "test",
    srcs = ["test.cc"],
    hdrs = ["test.h"],
)

(
    name = "grecc_libraryeter",
    srcs = ["greeter.cc"],
    hdrs = ["greeter.h"],
)

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        "@com_github_grpc_grpc//:grpc++_public_hdrs",
        "//protos:greet_cc_grpc",
        ":greeter",
    ],
    includes = ["grpcpp/grpcpp.h"],
)

