# 2438. Range Product Queries of Powers
n = 919
queries = [[0,6]]
MODULO = 10**9 + 7

# Constructing powers
binaryN = bin(n)
binaryN = binaryN[2:]

binaryArr = []

for i in range(len(binaryN)-1, -1, -1):
    if binaryN[i] == '1':
        binaryArr.append(2**(len(binaryN)-i-1))

# Consulting queries
ans = [1 for _ in range(len(queries))]
for i in range(len(queries)):
    start, end = queries[i]
    for j in range(start,end+1):
        ans[i] *= binaryArr[j]
        ans[i] = ans[i] % MODULO

print(ans)