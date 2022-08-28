from absl.testing import absltest
from absl import logging

class SimpleTest(absltest.TestCase):
  def test(self):
    logging.info('hello!')

if __name__ == '__main__':
  absltest.main()
