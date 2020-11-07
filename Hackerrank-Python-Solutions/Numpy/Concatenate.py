import numpy as np 

n, m, p = list(map(int, input().strip().split()))

nth_mat = np.array([list(map(int, input().strip().split())) for _ in range(n)], dtype = np.int32)
mth_mat = np.array([list(map(int, input().strip().split())) for _ in range(m)], dtype = np.int32)

print(np.concatenate((nth_mat, mth_mat), axis = 0))