### Mostly sane bazel starter kit

This repo can serve as a launchpad for starting bazel projects. It sets up:

- proto + python + cpp (via `rules_proto_grpc`)
- C++ absl (which includes `glog` and `gflags`)
- googletest
- python absl (which includes flags, logging, and testing)

- TODO(vasiliy): mypy or pytype
- TODO(vasiliy): external tensorflow

See `example/` for bazel rules that are in use, delete the directory, and start
working immediately, never having to mess with `WORKSPACE`.
