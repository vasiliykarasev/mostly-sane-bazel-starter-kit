load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Protobuf _seems_ to include absl, and we want to use the absolute
# bleeding-edge version of absl (want LOG), so include it at the top.
http_archive(
    name = "com_google_absl",
    strip_prefix = "abseil-cpp-92fdbfb301f8b301b28ab5c99e7361e775c2fb8a",
    urls = ["https://github.com/abseil/abseil-cpp/archive/92fdbfb301f8b301b28ab5c99e7361e775c2fb8a.zip"],
)

http_archive(
    name = "com_google_absl_py",
    strip_prefix = "abseil-py-a0ae31683e6cf3667886c500327f292c893a1740",
    urls = ["https://github.com/abseil/abseil-py/archive/a0ae31683e6cf3667886c500327f292c893a1740.zip"],
)

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

# googletest
http_archive(
    name = "com_google_googletest",
    strip_prefix = "googletest-011959aafddcd30611003de96cfd8d7a7685c700",
    urls = ["https://github.com/google/googletest/archive/011959aafddcd30611003de96cfd8d7a7685c700.zip"],
)

# google-benchmark.
http_archive(
    name = "com_github_google_benchmark",
    sha256 = "2a778d821997df7d8646c9c59b8edb9a573a6e04c534c01892a40aa524a7b68c",
    strip_prefix = "benchmark-bf585a2789e30585b4e3ce6baf11ef2750b54677",
    urls = ["https://github.com/google/benchmark/archive/bf585a2789e30585b4e3ce6baf11ef2750b54677.zip"],
)
