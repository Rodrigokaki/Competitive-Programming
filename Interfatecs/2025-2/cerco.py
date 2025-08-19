x1, y1, r = list(map(int, input().split()))

xUpper = x1+r
xLower = x1-r
yUpper = y1+r
yLower = y1-r

n = int(input())
count = 0
for i in range(n):
    x, y = list(map(int, input().split()))
    if x <= xUpper and x >= xLower and y <= yUpper and y >= yLower:
        count += 1
print(count)