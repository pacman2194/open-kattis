#!/usr/bin/python

cases = int(input())
for case in range(cases):
    x = int(input())
    if x%2 == 1:
        print("{0} is odd".format(x))
    else:
        print("{0} is even".format(x))
