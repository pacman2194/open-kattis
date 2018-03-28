#!/usr/bin/python3

import math

for i in range(int(input())):
    pos = [0, 0]
    rad = 0
    for instr in range(int(input())):
        comm, z = [y for y in input().split()]
        x = int(z)
        if comm == "fd":
            pos[0] += math.cos(rad) * x
            pos[1] += math.sin(rad) * x
        elif comm == "lt":
            rad += math.radians(x)
        elif comm == "rt":
            rad -= math.radians(x)
    print(int(round(math.sqrt((pos[0]**2) + (pos[1]**2)), 0)))
