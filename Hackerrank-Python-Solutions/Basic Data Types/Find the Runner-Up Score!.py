if __name__ == '__main__':
    n = int(input())
    ar = list(map(int, input().split()))
    m = max(ar)
    ar = [x for x in ar if x != m]
    print(max(ar))
