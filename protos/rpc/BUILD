java_proto_library(
    name = "greet_java_proto",
    deps = [":greet_proto"],
)

cc_proto_library(
    name = "greet_cc_proto",
    deps = [":greet_proto"],
)

proto_library(
    name = "greet_proto",
    srcs = ["greet.proto"],
    deps = [
        # Well known protos should be included as deps in the
        # proto_library rules of the source files importing them.
        # A list of all @com_google_protobuf well known protos can
        # seen with:
        # `bazel query 'kind(proto_library, @com_google_protobuf//:all)'`
        "@com_google_protobuf//:any_proto",
    ],
)

cc_proto_library(
    name = "greet_cc",
    deps = [":greet_proto"],
)

