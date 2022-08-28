load("@rules_proto_grpc//python:defs.bzl", "python_proto_library")
load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_library")

py_test(
    name = "main_py",
    srcs = ["main.py"],
    main = "main.py",
    deps = [
        ":example_pb_py",
        "@com_google_absl_py//absl:app",
        "@com_google_absl_py//absl/flags",
        "@com_google_absl_py//absl/logging",
    ],
)

py_test(
    name = "main_py_test",
    srcs = ["main_test.py"],
    main = "main_test.py",
    deps = [
        "@com_google_absl_py//absl/logging",
        "@com_google_absl_py//absl/testing:absltest",
    ],
)

cc_test(
    name = "main_cc",
    srcs = ["main.cc"],
    deps = [
        ":example_pb_cc",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/log",
        "@com_google_absl//absl/log:initialize",
        "@com_google_absl//absl/strings",
    ],
)

cc_test(
    name = "main_cc_test",
    srcs = ["main_test.cc"],
    deps = ["@com_google_googletest//:gtest_main"],
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
