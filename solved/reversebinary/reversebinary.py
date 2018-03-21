#!/usr/bin/python3
x = bin(int(input()))
y = x[0:2] + x[:1:-1]
print(int(y,2))
