import numpy as np

A = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
B = np.array([[9, 8, 7], [6, 5, 4], [3, 2, 1]])

print(np.amax(A), '\n\n')
print(np.amin(B), '\n\n')
print(np.dot(A, B), '\n\n')
print(np.multiply(B, 2), '\n\n')
print(A + B, '\n\n')
print(A - B, '\n\n')
