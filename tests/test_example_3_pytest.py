import unittest
import numpy as np
import cpp_examples as m

class TestExample3(unittest.TestCase):
    def test_multiply_with_list(self):
        A = [0.0, 1.0, 2.0 ,3.0, 4.0, 5.0]
        result = m.multiplyArrayByTen(A)
        expected_result = [i * 10 for i in A]
        self.assertSequenceEqual(result.tolist(), expected_result, "assertion error")

    def test_multiply_with_numpy(self):
        A = np.arange(10)
        result = m.multiplyArrayByTen(A)
        expected_result = A * 10
        self.assertSequenceEqual(result.tolist(), expected_result.tolist(), "assertion error")

if __name__ == '__main__':
    unittest.main()