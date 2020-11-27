import unittest
import numpy as np
import cpp_examples as m 

class TestExample4(unittest.TestCase):
    def test_length(self):
        A = np.arange(10).reshape(5,2)
        result = m.length(A)
        expected_result = np.array([
            [0., 1., 0.],
            [2., 3., 2.44948974],
            [4., 5., 4.47213595],
            [6., 7., 6.4807407],
            [8., 9., 8.48528137]])
        self.assertAlmostEqual(result.all(), expected_result.all(), "assertion error")


if __name__ == "__main__":
    unittest.main()