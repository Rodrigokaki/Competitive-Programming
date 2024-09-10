import math

n = int(input())

pi = 3.1415
for _ in range(n):
    nPerson, mlTotal = map(int, input().split())
    tinyBase, largeBase, hMax = map(int, input().split())

    vol = mlTotal/nPerson

    radiusMediumBase = (tinyBase+largeBase) / 2

    areaBase = pi * math.pow(radiusMediumBase, 2)

    h = vol / areaBase

    print(h)