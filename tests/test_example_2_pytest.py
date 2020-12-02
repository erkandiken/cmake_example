import unittest
import cpp_examples as m

class TestExample2(unittest.TestCase):
    def test_modify_nested_list(self):
        A = [[1,2,3,4], [5,6]]
        result = m.multiplyNestedVectorByTwo(A)
        expected_result = [[j * 2.0 for j in i] for i in A]
        self.assertSequenceEqual(result, expected_result, "assertion error")

if __name__ == '__main__':
    unittest.main()