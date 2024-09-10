from collections import defaultdict

n, numChar = map(int, input().split())

hashmapList = [defaultdict(int) for _ in range(numChar)]

for i in range(n):
    entry = input()
    for letterIndex in range(numChar):
        if entry[letterIndex] == "*":
            continue
        hashmapList[letterIndex][entry[letterIndex]] += 1

for position in hashmapList