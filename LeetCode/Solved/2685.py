from collections import defaultdict

n = 6
edges = [[0,1],[0,2],[1,2],[3,4]]

hashmap = defaultdict(list)
ans = 0
for vertice1, vertice2 in edges:
    hashmap[vertice1].append(vertice2)
    hashmap[vertice2].append(vertice1)

seen = set()
for i in range(n):
    if i in seen:
        continue
    
    if hashmap[i] == []:
        ans += 1
        continue
    
    queue = hashmap[i][:]
    queue.append(i)
    connected = set()
    for j in queue:
        connected.add(j)

    complete = True
    while queue:
        cur = queue.pop()
        curConnected = set()
        curConnected.add(cur)
        for j in hashmap[cur]:
            curConnected.add(j)
            seen.add(j)

        if curConnected == connected:
            continue
        else:
            complete = False
    
    if complete:
        ans += 1


print(ans)