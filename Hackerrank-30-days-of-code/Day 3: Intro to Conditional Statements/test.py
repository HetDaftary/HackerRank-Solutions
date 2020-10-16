#!/bin/python3

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    N = int(input())
    if (N%2 == 1 and N > 1 and N < 6) or (N%2 == 0 and N > 5 and N < 21) or (N%2 == 1 and N > 20):
        print('Weird')
    else: 
        print('Not Weird')
