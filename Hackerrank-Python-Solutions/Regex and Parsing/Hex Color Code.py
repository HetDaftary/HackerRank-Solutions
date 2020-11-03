import re

if __name__ == "__main__":
    reg, n = re.compile(r"(:|,| +)(#[abcdefABCDEF1234567890]{3}|#[abcdefABCDEF1234567890]{6})\b"), int(input())

    for i in range(n):
        line  = input()
        items = reg.findall(line)

        if items:
            for item in items:    
                print(item[1])
