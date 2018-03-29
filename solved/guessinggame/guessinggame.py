#!/usr/bin/python3

while True:
    n = int(input())
    if n == 0:
        break
    mini = 1
    maxi = 10
    line = input()
    while line != "right on":
        if line == "too low" and n >= mini:
            mini = n + 1
        elif line == "too high" and n <= maxi:
            maxi = n - 1
        n = int(input())
        line = input()
    if n > maxi or n < mini:
        print("Stan is dishonest")
    else:
        print("Stan may be honest")
