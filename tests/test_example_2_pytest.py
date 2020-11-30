
import unittest
import cpp_examples as m

class TestExample2(unittest.TestCase):
    def test_modify_nested_list(self):
        A = [[1,2,3,4],[5,6]]
        result = m.modify_nested_list(A)
        expected_result = [[2,4,6,8], [10,12]]
        self.assertEqual(result, expected_result, "assertion error")

if __name__ == '__main__':
    unittest.main()