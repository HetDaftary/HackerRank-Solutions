# Enter your code here. Read input from STDIN. Print output to STDOUT

from itertools import combinations_with_replacement

in0, in1 = input().strip().split()
in1, in0 = int(in1), ''.join(sorted([x for x in in0]))

print('\n'.join([''.join(x) for x in combinations_with_replacement(in0, in1)]))
