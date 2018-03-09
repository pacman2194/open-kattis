#!/usr/bin/python3
import sys

numbers = {
    '0': 'zero', '1': 'one', '2': 'two', '3': 'three', '4': 'four', '5': 'five', '6': 'six', '7': 'seven',
    '8': 'eight', '9': 'nine', '10': 'ten', '11': 'eleven', '12': 'twelve', '13': 'thirteen',
    '14': 'fourteen', '15': 'fifteen', '16': 'sixteen', '17': 'seventeen', '18': 'eighteen', '19': 'nineteen',
    '20': 'twenty', '30': 'thirty', '40': 'forty', '50': 'fifty', '60': 'sixty', '70': 'seventy',
    '80': 'eighty', '90': 'ninety'}

def conversion(x):
    if int(x) < 21:
        return numbers.get(x)
    elif int(x) > 99:
        return x
    elif x[1:] == '0':
        return numbers.get(x)
    else:
        return numbers.get(x[:1]+'0') + '-' + numbers.get(x[1:])

for i in sys.stdin:
    line = i.split()
    for z in range(len(line)):
        if line[z].isdigit():
            if z == 0:
                line[z] = conversion(line[z]).capitalize()
            else:
                line[z] = conversion(line[z])
    print(' '.join(line))
