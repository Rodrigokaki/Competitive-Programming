from collections import defaultdict, deque

n = int(input())

hashmap = defaultdict(list)

sequence = list(map(int, input().split()))

for i in range(n-1):
    entry = list(map(int,input().split()))
    hashmap[entry[0]-1].append(entry[1]-1)
    hashmap[entry[1]-1].append(entry[0]-1)

ans = 0
seen = set()
seen.add(i)
search = deque()
search.append(0)
points = [1]*(n/2)
count = 1
toFound = set()
while search:
    num = search.popleft()
    count -= 1

    if num not in toFound:
        toFound.add(num)
    else:


    for j in hashmap[num]:
        if j not in seen:
            search.append(j)
            seen.add(j)

    if count == 0:
        count = len(search)
        ans += 1

print(ans)