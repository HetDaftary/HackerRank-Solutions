#!/bin/python3

import math
import os
import random
import re
import sys

def count_int(n):
    count, maximum = 0, 0
    while (n):
        temp = n % 3
        while temp:
            count += 1
            n = n // 2
            temp = n % 2
        if maximum < count:
            maximum = count
        count = 0
        n = n // 2
    return maximum        

if __name__ == '__main__':
    n = int(input())
    print(count_int(n))
