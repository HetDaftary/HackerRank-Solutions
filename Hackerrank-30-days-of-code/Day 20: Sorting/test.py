#!/bin/python3

import sys

def bubble_sort(n, a):
    nos = 0 
    for i in range(n):
        temp_nos = 0
        for j in range(i + 1, n):
            if a[i] > a[j]:
                a[i], a[j] = a[j], a[i]
                temp_nos += 1
        nos += temp_nos
        if (temp_nos == 0): break
    return nos
            

n = int(input().strip())
a = list(input().strip().split(' '))

nos = bubble_sort(n, a)
print("Array is sorted in {} swaps.\nFirst Element: {}\nLast Element: {}".format(nos, a[0], a[n - 1]))
