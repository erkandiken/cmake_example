import unittest
import numpy as np
import cpp_examples as m 



class TestExample9(unittest.TestCase):
    def test_matrixmul_1d(self):
        A = np.arange(5)
        B = np.arange(5)
        result = m.matrixMul(A, B)
        expected_result = (A * B).astype(np.float)
        self.assertSequenceEqual(result.tolist(), expected_result.tolist(), "assertion error")

    def test_matrixmul_2d(self):
        A = np.arange(25).reshape(5, 5)
        B = np.arange(25).reshape(5, 5)
        result = m.matrixMul(A, B)
        expected_result = (A * B).astype(np.float)
        self.assertSequenceEqual(result.tolist(), expected_result.tolist(), "assertion error")

    def test_matrixmul_3d(self):
        A = np.arange(125).reshape(5, 5, 5)
        B = np.arange(125).reshape(5, 5, 5)
        result = m.matrixMul(A, B)
        expected_result = (A * B).astype(np.float)
        self.assertSequenceEqual(result.tolist(), expected_result.tolist(), "assertion error")


if __name__ == "__main__":
    unittest.main()
