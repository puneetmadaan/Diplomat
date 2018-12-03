package(default_visibility = ["//visibility:public"])
load("@com_github_grpc_grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")

# java_proto_library(
#     name = "greet_java_proto",
#     deps = [":greet_proto"],
# )


cc_grpc_library(
    name = "greeter_cc_grpc",
    srcs = ["greet.proto",],
    deps = [],
    proto_only = False,
    well_known_protos = False,
)
