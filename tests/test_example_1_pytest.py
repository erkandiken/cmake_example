import unittest
import cpp_examples as m

class TestExample1(unittest.TestCase):
    def test_multiply_by_two(self):
        A = [1.0, 2.0, 3.0, 4.0]
        result = m.multiplyByTwo(A)
        expected_result = [i * 2.0 for i in A]
        self.assertSequenceEqual(result, expected_result, "assertion error")

    def test_multiply_by_factor(self):
        A, factor = [1.0, 2.0, 3.0, 4.0], 4
        result = m.multiplyByFactor(A, factor)
        expected_result = [i * factor for i in A]
        self.assertSequenceEqual(result, expected_result, "assertion error")

if __name__ == '__main__':
    unittest.main()