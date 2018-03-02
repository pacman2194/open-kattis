#!/usr/bin/python3

cases = int(input())
while cases != -1:
	time = 0
	miles = 0
	for case in range(cases):
		speed, hours = [int(x) for x in input().split()]
		miles += speed*(hours-time)
		time += (hours-time)
		#print(repr(miles)+" "+repr(time))
	print(repr(miles)+" miles")
	cases = int(input())