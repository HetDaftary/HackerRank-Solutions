if __name__ == '__main__':
    N, ls = int(input()), []
    for _ in range(N):
        query = input().split()
        if query[0] == "insert":
            ls.insert(int(query[1]), int(query[2]))
        elif query[0] == "append":
            ls.append(int(query[1]))
        elif query[0] == "remove":
            ls.remove(int(query[1]))
        elif query[0] == "pop":
            ls.pop()
        elif query[0] == "print":
            print(ls)
        elif query[0] == "sort":
            ls.sort()
        else:
            ls.reverse()
