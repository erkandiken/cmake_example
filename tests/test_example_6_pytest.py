import unittest
import numpy as np
import cpp_examples as m

class TestExample6(unittest.TestCase):
    def test_mul(self):
        A = np.arange(10)
        custom_vector = m.CustomVectorXd(A)
        result = custom_vector.mul(factor=1)
        self.assertSequenceEqual(result.tolist(), A.tolist(), "assertion error")
    
    def test_mul_with_input(self):
        A, factor = np.arange(10), 3
        custom_vector = m.CustomVectorXd(A)
        result = custom_vector.mul(factor=factor)
        self.assertAlmostEqual(result.tolist(), (A * factor).tolist(), "assertion error")

    def test_trans(self):
        A = np.arange(10)
        result = m.trans(A)
        expected_result = A[::-1]
        self.assertSequenceEqual(result.tolist(), expected_result.tolist(), "assertion error")

if __name__ == "__main__":
    unittest.main()