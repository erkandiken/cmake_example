
import unittest
import numpy as np
import cpp_examples as m

class TestExample5(unittest.TestCase):
    def test_inv(self):
        A = np.array([[1,2,1], [2,1,0], [-1,1,2]])
        expected_result = np.linalg.inv(A)
        result = m.inv(A)
        self.assertAlmostEqual(result.all(), expected_result.all(), "assertion error")
    
    def test_det(self):
        A = np.array([[1,2,1], [2,1,0], [-1,1,2]])
        expected_result = np.linalg.det(A)
        result = m.det(A)
        self.assertAlmostEqual(result, expected_result)

if __name__ == "__main__":
    unittest.main()