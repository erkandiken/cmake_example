import unittest
import numpy as np
import cpp_examples as m

class TestExample7(unittest.TestCase):
    def test_overload_static_double(self):
        a, b = 12.0, 5.5
        result = m.mul(a, b)
        self.assertAlmostEqual(result, a * b, "assertion error")
    
    def test_overload_static_int(self):
        a, b = 12, 5
        result = m.mul(a, b)
        self.assertAlmostEqual(result, a * b, "assertion error")

if __name__ == "__main__":
    unittest.main()