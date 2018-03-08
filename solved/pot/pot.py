#!/usr/bin/python3

cases = int(input())
x = 0

for case in range(cases):
	n = int(input())
	result = (n//10)**(n%10)
	#print(result)
	x += result
	#print(x)
print(x)