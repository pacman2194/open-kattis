#!/usr/bin/python3

pos = 0
p, phrase = [x for x in input().split()]
for i in range(len(phrase)):
    if pos < len(p) - 1:
        if phrase[i] != p[pos]:
            if phrase[i] in p[pos + 1::]:
                print("FAIL")
                break
            if i == len(phrase) - 1:
                print("FAIL")
                break
        else:
            pos += 1
    else:
        if i < len(phrase) - 1:
            if phrase[i] == p[pos]:
                print("PASS")
                break
        else:
            if phrase[i] == p[pos]:
                print("PASS")
                break
            else:
                print("FAIL")
                break
