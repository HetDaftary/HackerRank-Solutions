import numpy as np 

n, m = list(map(int, input().strip().split()))
in0 = np.array([list(map(int, input().strip().split())) for _ in range(n)], dtype = np.int32)

print(
np.prod(np.sum(in0, axis = 0)))