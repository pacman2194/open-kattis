#!/usr/bin/python3

cases = int(input())

for case in range(cases):
	c, n = [int(x) for x in input().split()]
	if n%2==0:
		print(repr(c)+" "+repr(int((n+1)*(n/2)))+" "+repr(n*n)+" "+repr(n*(n+1)))
	else:
		print(repr(c)+" "+repr(int((n+1)*((n-1)/2)+((n-1)/2)+1))+" "+repr(n*n)+" "+repr(n*(n+1)))