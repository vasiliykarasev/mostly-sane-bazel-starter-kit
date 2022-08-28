#include "absl/flags/flag.h"
#include "absl/log/initialize.h"
#include "absl/log/log.h"
#include "absl/strings/str_cat.h"
#include "example/example.pb.h"
#include <cstdio>

ABSL_FLAG(int, cpp_flag, 123, "An arbitrary c++ flag");

int main(int argc, char **argv) {
  ExampleProto proto;
  proto.set_name("hello");
  proto.set_value(1);
  LOG(INFO) << absl::StrCat("DebugString:", "\n", proto.DebugString());
  LOG(INFO) << "flag value was: " << absl::GetFlag(FLAGS_cpp_flag);
  return 0;
}
