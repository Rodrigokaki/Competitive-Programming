from collections import defaultdict, deque

while True:
    n = int(input())
    if n == 0:
        break
    graph = defaultdict(list)
    for i in range(1, n):
        v, w = list(map(int, input().split()))
        graph[i].append((v, w))
        graph[v].append((i, w))


    t = int(input())
    
    ans = []
    for _ in range(t):
        source, target = list(map(int, input().split()))
        toVisit = deque()
        toVisit.append((source, 0))
        seen = set()
        while toVisit:
            node, weight = toVisit.popleft()
            if node == target:
                ans.append(weight)
                break
            seen.add(node)
            for neighborNode, neighborWeight in graph[node]:
                if neighborNode in seen:
                    continue
                toVisit.append((neighborNode, weight+neighborWeight))
    
    print(*ans)