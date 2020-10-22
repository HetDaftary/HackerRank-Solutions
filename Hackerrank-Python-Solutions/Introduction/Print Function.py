def print_function(n):
    print(''.join([str(x) for x in range(1, n + 1)]))

if __name__ == '__main__':
    n = int(input())
    print_function(n)
