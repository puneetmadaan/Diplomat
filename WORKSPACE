http_archive(
    name = "com_github_grpc_grpc",
    url = "https://github.com/grpc/grpc/archive/a933c40e679c5aef7107e7561e827cd12a1008e0.tar.gz",
    strip_prefix = "grpc-a933c40e679c5aef7107e7561e827cd12a1008e0",
)

git_repository(
    name = "com_google_protobuf",
    remote = "https://github.com/google/protobuf.git",
    # strip_prefix = "protobuf-3.6.1",
    tag = "v3.6.1",
)

new_http_archive(
    name = "gtest",
    url = "https://github.com/google/googletest/archive/release-1.7.0.zip",
    sha256 = "b58cb7547a28b2c718d1e38aee18a3659c9e3ff52440297e965f5edffe34b6d0",
    build_file = "gtest.BUILD",
)

git_repository(
    name = "org_pubref_rules_protobuf",
    remote = "https://github.com/pubref/rules_protobuf.git",
    tag = "v0.8.2",
)

load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")

grpc_deps()
