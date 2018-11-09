cc_library(
    name = "test",
    srcs = ["test.cc"],
    hdrs = ["test.h"],
)

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        "//rpc:test",
    ],
)