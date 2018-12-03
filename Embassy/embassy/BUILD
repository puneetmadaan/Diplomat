package(default_visibility = ["//visibility:public"])
load("@com_github_grpc_grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")

cc_library(
    name = "test",
    srcs = ["test.cc"],
    hdrs = ["test.h"],
)

cc_library(
    name = "greeter",
    hdrs = ["greeter.h"],
    srcs = ["greeter.cc"],
    deps = [
        "//protos:greeter_cc_grpc",
        "@com_github_grpc_grpc//:grpc++",
    ],
)

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":greeter",
        "@com_github_grpc_grpc//:grpc++",
    ],
)

cc_binary(
    name = "server",
    srcs = ["greetServer.cc"],
    deps = [
        "//protos:greeter_cc_grpc",
        "@com_github_grpc_grpc//:grpc++",
    ]
)