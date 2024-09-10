from collections import defaultdict, deque

def bfs(graph, start, end):
    queue = deque([(start, 0)])  # (nó atual, distância até ele)
    visited = set()
    visited.add(start)
    
    while queue:
        current, distance = queue.popleft()
        if current == end:
            return distance
        for neighbor in graph[current]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append((neighbor, distance + 1))
    return -1

n = int(input())

card_values = list(map(int, input().split()))
# Criação do grafo
graph = defaultdict(list)
for _ in range(n-1):
    u, v = list(map(int,input().split()))
    graph[u].append(v)
    graph[v].append(u)

# Encontrar os pares de cartas com o mesmo valor
pairs = defaultdict(list)
for idx, value in enumerate(card_values, 1):
    pairs[value].append(idx)

# Calcular a maior pontuação
max_score = 0
for pair in pairs.values():
    if len(pair) == 2:
        a, b = pair
        distance = bfs(graph, a, b)
        max_score += distance

print(max_score)
