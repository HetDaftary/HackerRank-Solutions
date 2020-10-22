rows, columns =  list(map(int, input().strip().split()))

s = '.|.'

rows += 1

count = 1
for i in range(1, rows//2):
    
    stringAnswer = s
    for j in range(1, count):
        stringAnswer += s
    print(stringAnswer.center(columns, '-'))
    count +=2 

print('WELCOME'.center(columns, '-'))

count -= 2
for i in range(rows//2, 1, -1):
    
    stringAnswer = s
    for j in range(1, count):
        stringAnswer += s
    print(stringAnswer.center(columns, '-'))
    count -= 2
