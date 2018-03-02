#!/usr/bin/python3

statues = int(input())
i = 0
while(2**i<statues):
	i += 1
print(i+1)