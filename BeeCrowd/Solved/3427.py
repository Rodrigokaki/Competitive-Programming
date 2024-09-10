import math

n, xInicial, yInicial = map(int, input().split())
biggest = int(pow(2, n))
target = int(biggest/2)

ans = 0
while [xInicial, yInicial] != [target, target]:
    if xInicial < target:
        xInicial *= 2
    elif xInicial > target:
        xInicial -= (biggest-xInicial)

    if yInicial < target:   
        yInicial *= 2
    elif yInicial > target:
        yInicial -= (biggest-yInicial)

    ans += 1

print(ans)