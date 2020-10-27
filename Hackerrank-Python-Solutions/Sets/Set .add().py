# Enter your code here. Read input from STDIN. Print output to STDOUT.

set1, N = set(), int(input())

for _ in range(N):
    set1.add(input().strip())

print(len(set1))
