#include "example/example.pb.h"
#include <cstdio>

int main(int argc, char **argv) {
  ExampleProto proto;
  proto.set_name("hello");
  proto.set_value(1);
  std::cout << "DebugString:\n" << proto.DebugString();
  return 0;
}
