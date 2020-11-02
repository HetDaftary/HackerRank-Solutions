N = int(input())

for _ in range(N):
    try:
        a, b = list(map(int, input().strip().split()))
        print(a//b)
    except ZeroDivisionError as e:
        print ("Error Code:", e)
    except ValueError as e:
        print ("Error Code:", e)
