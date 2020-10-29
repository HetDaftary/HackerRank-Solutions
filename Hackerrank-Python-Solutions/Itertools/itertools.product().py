from itertools import product

a = list(map(int, input().strip().split()))
b = list(map(int, input().strip().split()))

answer = list(product(a, b))
answer = [str(x) for x in answer]

print(' '.join(answer))
