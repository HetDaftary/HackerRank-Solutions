#!/bin/python

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
    
    if n % 2: # odd.
        print("Weird")
    elif n < 5: # All the elif never come if number is odd. 
        print("Not Weird")
    elif n < 21: # If number in 2 to 5 than above will execute and this will not be.
        print("Weird")
    else:
        print("Not Weird")
