#!/usr/bin/python3

import sys
s = set()
ans = set()
for line in sys.stdin:
    lin = line.split()
    for w in lin:
        s.add(w)
c = 0
for n in s:
    for a in s:
        if a != n:
            ans.add(n + a)
for z in sorted(ans):
    print(z)
