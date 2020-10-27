# Enter your code here. Read input from STDIN. Print output to STDOUT

n, ls, d = int(input()), list(map(int, input().strip().split())), dict()

for i in ls:
    try: 
        d[i] += 1
    except:
        d[i] = 1

for i in d:
    if d[i] != n:
        print(i)
        break
