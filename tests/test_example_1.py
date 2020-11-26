import cpp_examples as m

A = [1., 2., 3., 4.]
result = m.modify_list(A)
expected_result = [2., 4., 6., 8.]

try:
    assert result == expected_result, "assertion error"
except AssertionError as err:
    print(err)