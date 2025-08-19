n, varMax = list(map(int, input().split()))

clientsTemp = set()

for _ in range(n):
    clientsTemp.add(int(input()))

clientsTemp = sorted(list(clientsTemp))

ans = 0
i = 0
while i < len(clientsTemp):
    cur = clientsTemp[i]
    ans += 1
    i += 1
    while i < len(clientsTemp) and cur >= clientsTemp[i]-varMax:
        i += 1

print(ans)
