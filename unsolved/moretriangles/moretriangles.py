#!/usr/bin/python3

n = int(input())
count = 0
for c in range(1, n):
    for b in range(1, n):
        for a in range(1, b + 1):
            if((pow(a, 2, n) + pow(b, 2, n)) % n == pow(c, 2, n)):
                count += 1
print(count)
