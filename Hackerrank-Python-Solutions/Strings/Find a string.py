def count_substring(string, sub_string):
    ans = 0
    for i in range (0, len(string) - len(sub_string) + 1):
        if string[i: i + len(sub_string)] == sub_string:
            ans += 1
    return ans

if __name__ == '__main__':
    string = raw_input().strip()
    sub_string = raw_input().strip()
    
    count = count_substring(string, sub_string)
    print count
