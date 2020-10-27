n, m = list(map(int, input().strip().split()))
arr = list(map(int, input().strip().split()))
arr1 = [set(map(int, input().strip().split())) for x in range(2)]

happiness = 0

for i in arr:
    if i in arr1[0]:
        happiness += 1
    if i in arr1[1]:
        happiness -= 1 

print(happiness)
