#!/usr/bin/python3

ans = int(input()) - 1
c = int(1)
leng = int(0)
while ans > 1:
    if '0' in bin(c)[2::]:
        c += 1
    elif leng == 0:
        leng = 1
        c += 1
    else:
        leng = 0
        c = int(c / 2) + 1
    ans -= 1
if ans == 0:
    print(1)
elif leng == 0:
    print(int((bin(c)[2::] + bin(c)[:1:-1]), 2))
else:
    print(int((bin(c)[2::] + bin(c)[-2:1:-1]), 2))
