
import unittest
import cpp_examples as m

class TestExample1(unittest.TestCase):
    def test_modify(self):
        A = [1., 2., 3., 4.]
        result = m.modify_list(A)
        expected_result = [2., 4., 6., 8.]
        self.assertEqual(result, expected_result, "assertion error")

if __name__ == '__main__':
    unittest.main()