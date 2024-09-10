import math

listSize, n = map(int, input().split())
listPositions = list(map(int, input().split()))

higher = 0
for i in range(len(listPositions)):
    if i == 0:
        higher = (listPositions[i]-1)*2
        
    if i == (len(listPositions)-1):
        if (listSize-listPositions[i])*2 > higher:
            higher = (listSize-listPositions[i])*2

    if (listPositions[i]-listPositions[i-1])-1 > higher:
        higher = (listPositions[i]-listPositions[i-1])-1

ans = math.ceil(higher/2)

print(ans)