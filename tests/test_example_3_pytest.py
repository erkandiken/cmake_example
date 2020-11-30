
import unittest
import numpy as np
import cpp_examples as m

class TestExample3(unittest.TestCase):
    def test_multiply(self):
        A = [0,1,2,3,4,5]
        result = m.multiply(A)
        expected_result = np.arange(0, 60, 10)
        self.assertSequenceEqual(result.tolist(), expected_result.tolist(), "assertion error")

    def test_multiply_with_numpy(self):
        A = np.arange(10)
        result = m.multiply(A)
        expected_result = np.arange(0, 100, 10)
        self.assertSequenceEqual(result.tolist(), expected_result.tolist(), "assertion error")

if __name__ == '__main__':
    unittest.main()