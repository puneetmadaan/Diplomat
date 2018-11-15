package(default_visibility = ["//visibility:public"])

cc_library(
    name = "test",
    srcs = ["test.cc"],
    hdrs = ["test.h"],
)

cc_library(
    name = "greeter",
    srcs = ["greeter.cc"],
    hdrs = ["greeter.h"]
)

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":greeter",
        "//protos/rpc:greet_cc_proto"
    ],
)

