def ans(string):
    temp=""
    for i in string:
        if(i in temp):
            pass
        else:
            temp=temp+i
    print(temp)

def merge_the_tools(string, k):
    # its' a void and hence don't return anything.
    n = len(string)
    for i in range(0,int(n/k)):
        ans(string[k*i:k*(i+1)])


if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
