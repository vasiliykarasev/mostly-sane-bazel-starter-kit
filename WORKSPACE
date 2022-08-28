load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Specify the protobuf version to use before specifying rules_proto_grpc.
http_archive(
    name = "com_google_protobuf",
    strip_prefix = "protobuf-21.5",
    urls = ["https://github.com/protocolbuffers/protobuf/releases/download/v21.5/protobuf-all-21.5.zip"],
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")

protobuf_deps()

bind(
    name = "protobuf",
    actual = "@com_google_protobuf//:protobuf",
)

bind(
    name = "protobuf_python",
    actual = "@com_google_protobuf//:protobuf_python",
)

http_archive(
    name = "rules_python",
    sha256 = "c03246c11efd49266e8e41e12931090b613e12a59e6f55ba2efd29a7cb8b4258",
    strip_prefix = "rules_python-0.11.0",
    url = "https://github.com/bazelbuild/rules_python/archive/refs/tags/0.11.0.tar.gz",
)

http_archive(
    name = "rules_cc",
    sha256 = "58bff40957ace85c2de21ebfc72e53ed3a0d33af8cc20abd0ceec55c63be7de2",
    urls = ["https://github.com/bazelbuild/rules_cc/releases/download/0.0.2/rules_cc-0.0.2.tar.gz"],
)

http_archive(
    name = "rules_proto_grpc",
    sha256 = "bbe4db93499f5c9414926e46f9e35016999a4e9f6e3522482d3760dc61011070",
    strip_prefix = "rules_proto_grpc-4.2.0",
    urls = ["https://github.com/rules-proto-grpc/rules_proto_grpc/archive/4.2.0.tar.gz"],
)

load("@rules_proto_grpc//:repositories.bzl", "rules_proto_grpc_repos", "rules_proto_grpc_toolchains")

rules_proto_grpc_toolchains()

rules_proto_grpc_repos()

# Python proto rules.
load("@rules_proto_grpc//python:repositories.bzl", rules_proto_grpc_python_repos = "python_repos")

rules_proto_grpc_python_repos()

load("@rules_proto_grpc//cpp:repositories.bzl", rules_proto_grpc_cpp_repos = "cpp_repos")

rules_proto_grpc_cpp_repos()
