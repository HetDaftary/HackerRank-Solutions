def mapper(s): # because map funcrion was not working somehow.
    a=[]
    for i in range(0,len(s)):
        a.append(int(s[i]))
    return(a)

q=int(input())
l=[]

for i in range(0,q):
    s=input().split()
    s=mapper(s)
    if(s[0]==1):
        l.append(s[1])
    elif(s[0]==2):
        l.remove(l[0])
    else:
        print(l[0])
