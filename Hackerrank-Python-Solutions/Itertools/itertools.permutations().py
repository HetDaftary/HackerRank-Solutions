from itertools import permutations

input0, input1 = input().strip().split()
input1 = int(input1)

ans_tuples = list(permutations(input0, input1))

ans_strings = [''.join(x) for x in ans_tuples]

print('\n'.join(sorted(ans_strings)))
