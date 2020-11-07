import numpy as np

A, B = np.array(list(map(int, input().strip().split()))), np.array(list(map(int, input().strip().split())))

print(np.inner(A, B), np.outer(A, B), sep = "\n")