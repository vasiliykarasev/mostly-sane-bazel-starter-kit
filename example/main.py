from example import example_pb2

def main():
  print(example_pb2.ExampleProto(name='hello', value=1))

if __name__ == "__main__":
  main()

