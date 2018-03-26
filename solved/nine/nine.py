#!/usr/bin/python3

cases = int(input())
for case in range(cases):
    x = int(input())
    # r = 9**(x - 1) % 1000000007

    r = 8 * pow(9, x - 1, 1000000007) % 1000000007
    print(repr(r))
