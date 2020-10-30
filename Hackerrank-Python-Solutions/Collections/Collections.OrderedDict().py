# Enter your code here. Read input from STDIN. Print output to STDOUT

from collections import OrderedDict

N, dic = int(input()), OrderedDict()

for _ in range(N):
    in0 = input().split()
    key, in0 = int(in0[-1]), ' '.join(in0[:len(in0) - 1])
    try: 
        dic[in0] += key
    except:
        dic[in0] = key

print('\n'.join([x + " " + str(dic[x]) for x in dic]))
