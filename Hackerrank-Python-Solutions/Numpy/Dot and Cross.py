import numpy as np

a=int(input())
arr1, arr2 = np.array([list(map(int,input().split())) for _ in range(a)]), np.array([list(map(int,input().split())) for _ in range(a)])

print(np.dot(arr1,arr2))