from example import example_pb2
from absl import app
from absl import flags
from absl import logging

FLAGS = flags.FLAGS
flags.DEFINE_integer("py_flag", 123, "An arbitrary python flag.")

def main(argv):
  logging.info(example_pb2.ExampleProto(name='hello', value=1))
  logging.info("flag value: %s", FLAGS.py_flag)

if __name__ == "__main__":
  app.run(main)

