cube = lambda x: x**3 # complete the lambda function 

def fibonacci(n):
    # return a list of fibonacci numbers
    ans0, ans1, ans = 0, 1, [0, 1]

    if n == 0:
        return []
    if n == 1:
        return [ans0]
    for i in range(2, n):
        ans.append(ans0 + ans1) 
        ans1, ans0 = ans[-1], ans1
    return ans

if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))
