#!/usr/bin/python3

cases = int(input())

for case in range(cases):
    input()
    count = 0
    cs, e = [int(x) for x in input().split()]
    csR = sorted([int(x) for x in input().split()])
    eR = sorted([int(x) for x in input().split()])
    for student in csR:
        if sum(csR) / cs < (sum(csR) - student) / (cs - 1) and sum(eR) / e < (sum(eR) + student) / (e + 1):
            count += 1
    print(count)
