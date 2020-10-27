# Enter your code here. Read input from STDIN. Print output to STDOUT

from math import *

a, b = int(input()), int(input())
ans = divmod(a, b)
print(ans[0], ans[1], ans, sep = '\n')
