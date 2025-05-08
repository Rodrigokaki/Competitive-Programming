import heapq

matrix = [[1,5,9],[10,11,13],[12,13,15]]
k = 8

q = []
for i in matrix:
    for num in i:
        heapq.heappush(q, num)

for i in range(k):
    ans = heapq.heappop(q)

print(ans)