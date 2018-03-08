#!/usr/bin/python3

n, k = [int(x) for x in input().split()]
if(2**k >= n):
    print("Your wish is granted!")
else:
    print("You will become a flying monkey!")
