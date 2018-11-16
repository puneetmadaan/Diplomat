package(default_visibility = ["//visibility:public"])
load("@com_github_grpc_grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")


# java_proto_library(
#     name = "greet_java_proto",
#     deps = [":greet_proto"],
# )

# proto_library(
#     name = "greet_proto",
#     srcs = ["greet.proto"],
# )

cc_grpc_library(
    name = "greet_cc_proto",
    srcs = ["greet.proto",],
    proto_only = False,
    deps = [],
    well_known_protos = True,
)
