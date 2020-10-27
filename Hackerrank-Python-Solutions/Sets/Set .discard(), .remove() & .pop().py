n = int(input())
s = set(map(int, input().split()))

m = int(input())

for _ in range(m):
    query = input().strip().split()
    if query[0] == "pop":
        s.pop()
    elif query[0] == "remove":
        s.remove(int(query[1]))
    else: # discard.
        s.discard(int(query[1]))

print(sum(s))
