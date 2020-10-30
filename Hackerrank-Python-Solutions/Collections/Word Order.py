# Enter your code here. Read input from STDIN. Print output to STDOUT

from collections import OrderedDict

N, dic = int(input()), OrderedDict()

for _ in range(N):
    word = input().strip()
    try:
        dic[word] += 1
    except:
        dic[word] = 1

print(len(dic))
print(' '.join([str(dic[x]) for x in dic]))
