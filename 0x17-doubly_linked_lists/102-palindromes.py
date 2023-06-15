#!/usr/bin/python3
import math
def is_palindrome(num):
    casted = str(num)
    length = len(casted)
    i = 0
    j = length - 1
    while (i < math.floor(length/2)):
        if casted[i] != casted[j]:
            return 0
        i += 1
        j -= 1
    return 1

def seek_highest_palindrome():
    palindrome = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            if is_palindrome(i * j) and (i * j) > palindrome:
                print("Running ---- {}".format(i * j))
                palindrome = i * j
    print("The maximum palindrome is: {}".format(palindrome))
    return palindrome

seek_highest_palindrome()
