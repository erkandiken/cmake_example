import unittest
import numpy as np
import cpp_examples as m

# TODO: tests do not fail, it suppoed to fail, check other tests as well
class TestExample8(unittest.TestCase):
    def test_overload_numpy_double(self):
        A = np.array([[1,2,1], [2,1,0], [-1,1,2]])
        B = 10
        result = A.astype(np.float) * B
        expected_result = m.mul(A.astype(np.float), float(B))
        self.assertAlmostEqual(result.all(), expected_result.all(), "assertion error")
    
    def test_overload_numpy_int(self):
        A = np.array([[1,2,1], [2,1,0], [-1,1,2]])
        B = 10
        result = A.astype(np.int) * B
        expected_result = m.mul(A.astype(np.int), int(B))
        self.assertEqual(result.all(), expected_result.all(), "assertion error")

if __name__ == "__main__":
    unittest.main()