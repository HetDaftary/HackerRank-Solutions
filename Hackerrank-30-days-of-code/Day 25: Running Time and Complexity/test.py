# Enter your code here. Read input from STDIN. Print output to STDOUT

def is_prime(n):
    if n < 2:
        return False
    i = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True

number_of_tests = int(input())
test_inputs = [int(input().strip()) for i in range(number_of_tests)]

for i in test_inputs:
    if is_prime(i):
        print("Prime")
    else:
        print("Not prime")
