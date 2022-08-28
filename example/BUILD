load("@rules_proto_grpc//python:defs.bzl", "python_proto_library")
load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_library")

py_test(
    name = "main_py",
    srcs = ["main.py"],
    main = "main.py",
    deps = [
        ":example_pb_py",
        "//external:protobuf_python",
    ],
)

cc_test(
    name = "main_cc",
    srcs = ["main.cc"],
    deps = [":example_pb_cc"],
)

proto_library(
    name = "example_proto",
    srcs = ["example.proto"],
)

python_proto_library(
    name = "example_pb_py",
    protos = [":example_proto"],
    deps = ["//external:protobuf_python"],
)

cpp_proto_library(
    name = "example_pb_cc",
    protos = [":example_proto"],
)
