n = int(input())
buildings = list(map(int,input().split()))

left, right = 0, 0
ans = 0
distance = 0
for i in range(1,len(buildings)):
    distanceLeft = buildings[i] + buildings[left] + (i - left)
    distanceRight = buildings[i] + buildings[right] + (i - right)
    if max(distanceLeft,distanceRight) > ans:
        if distanceLeft >= distanceRight:
            right = i
            ans = distanceLeft
        else:
            left = right
            right = i
            ans = distanceRight

print(ans)