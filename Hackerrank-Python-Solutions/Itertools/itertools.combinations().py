# Enter your code here. Read input from STDIN. Print output to STDOUT

from itertools import combinations

in0, in1 = input().strip().split()
in1 = int(in1)
in0 = ''.join(sorted([x for x in in0]))

for i in range(1, in1 + 1):
    ls = list(combinations(in0, i))
    ls = [''.join(x) for x in ls]
    print('\n'.join(ls))
