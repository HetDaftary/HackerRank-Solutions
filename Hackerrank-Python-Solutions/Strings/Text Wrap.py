import textwrap

def wrap(string, max_width):
    a=len(string)//max_width
    c=[]
    for i in range(0,a):
        c.append(string[max_width*(i):max_width*(i)+max_width])
    c.append(string[max_width*a:])
    c="\n".join(c)
    return(c)

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
