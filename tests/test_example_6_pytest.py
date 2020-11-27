import unittest
import numpy as np
import cpp_examples as m

class TestExample6(unittest.TestCase):
    def test_mul(self):
        A = np.arange(10)
        custom_vector = m.CustomVectorXd(A)
        result = custom_vector.mul()
        self.assertAlmostEqual(result.all(), A.all(), "assertion error")
    
    def test_mul_with_input(self):
        A = np.arange(10)
        custom_vector = m.CustomVectorXd(A)
        result = custom_vector.mul(factor=3.0)
        self.assertAlmostEqual(result.all(), (A * 3.0).all(), "assertion error")

    def test_trans(self):
        A = np.arange(10)
        result = m.trans(A)
        expected_result = A[::-1]
        self.assertAlmostEqual(result.all(), expected_result.all(), "assertion error")

if __name__ == "__main__":
    unittest.main()