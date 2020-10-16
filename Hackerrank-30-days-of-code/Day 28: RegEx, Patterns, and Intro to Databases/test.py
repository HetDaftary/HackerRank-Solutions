#!/bin/python3

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input())
    data = [input().strip().split() for x in range(n)]
    gmails = []
    for i in data:
        if "@gmail.com" in i[1]:
            gmails.append(i[0])
    gmails.sort()
    print("\n".join(gmails))
