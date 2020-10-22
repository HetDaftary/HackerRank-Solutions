def swap_case(s):
    a=""
    for i in range(len(s)):
        if s[i].islower():
            a=a+s[i].upper()
        else:
            a=a+s[i].lower()
    return a

