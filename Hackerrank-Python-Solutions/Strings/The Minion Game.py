vowels = 'AEIOU'

def minion_game(s):  
    # your code goes herds
    global vowels

    kevsc, stusc = 0, 0   
    for i in range(len(s)):
        if s[i] in vowels:
            kevsc += (len(s)-i)
        else:
            stusc += (len(s)-i)

    if kevsc > stusc:
        print "Kevin", kevsc
    elif kevsc < stusc:
        print "Stuart", stusc
    else:
        print "Draw"
  

if __name__ == '__main__':
    s = input()
    minion_game(s)
