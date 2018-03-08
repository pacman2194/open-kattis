#!/usr/bin/python3

matches, a, b = [int(x) for x in input().split()]
for match in range(matches):
    leng = int(input())
    if(leng**2 <= a**2 + b**2):
        print("DA")
    else:
        print("NE")
