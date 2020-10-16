n = int(input())
things = [input() for i in range(n)]

for i in range(n):
    for j in range(0, len(things[i]), 2):
        print(things[i][j], sep = "", end = "")
    print(end = " ")
    for j in range(1, len(things[i]), 2):
        print(things[i][j], sep = "", end = "")
    print()