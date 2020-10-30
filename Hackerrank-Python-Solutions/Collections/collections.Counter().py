n = int(input())

shoes_of_size = dict()
temp_list = list(map(int, input().strip().split()))
#print(temp_list)
for i in temp_list:
    try:
        shoes_of_size[i] += 1
    except:
        shoes_of_size[i] = 1

grant_total, noq = 0, int(input())

#print(shoes_of_size)

for i in range(noq):
    size, price = list(map(int, input().strip().split()))
    try:
        if shoes_of_size[size] > 0:
            shoes_of_size[size] -= 1
            grant_total += price
    except:
        pass

print(grant_total)
