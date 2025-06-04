from collections import deque, defaultdict

edges1 = [[0,1],[0,2],[2,3],[2,4]]
edges2 = [[0,1],[0,2],[0,3],[2,7],[1,4],[4,5],[4,6]]
k = 2

# constructing edges map
dictEdges1 = defaultdict(list)
dictEdges2 = defaultdict(list)

for edge1, edge2 in edges1:
    dictEdges1[edge1].append(edge2)
    dictEdges1[edge2].append(edge1)

for edge1, edge2 in edges2:
    dictEdges2[edge1].append(edge2)
    dictEdges2[edge2].append(edge1)

def bfs(i, dictEdges, k):
    queue = deque()
    seen = set()
    queue.append((i, 0))
    seen.add(i)
    ans = 0
    while queue:
        curNode, curK = queue.popleft()
        if curK <= k:
            ans += 1
            for edge in dictEdges[curNode]:
                if edge not in seen:
                    queue.append((edge, curK+1))
                    seen.add(edge)
    return ans

ans = [0] * (len(edges1)+1)
for i in range(len(edges1)+1):
    ans[i] = bfs(i,dictEdges1,k) + bfs(i,dictEdges2,k-1)

print(ans)