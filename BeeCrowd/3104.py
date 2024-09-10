import math

dividend = input()
divisor = int(input())

lenDividend = len(dividend)

curDividend = 0


if lenDividend > 3299:
    curDividend += dividend[(lenDividend - 3299):]

print(dividend % divisor)