import cpp_examples as m

print(m.__version__)
A = [1., 2., 3., 4.]
B = m.modify(A)
C = m.multiplyWithScalar(A)
print(B)
print(C)
