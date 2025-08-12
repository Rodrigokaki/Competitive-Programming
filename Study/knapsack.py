v = [2,2,4,3,5]
w = [3,1,3,2,4]
C = 7 + 1 # + 1 because it counts de 0 capacity

f = [0 for _ in range(C)]

# 0-1 Knapsack (An item can be taken 1 time at most)
for i in range(len(v)):
    for j in range(C-1, w[i]-1, -1):
        f[j] = max(f[j], f[j - w[i]] + v[i])

print(f)

# Complete Knapsack (An item can be taken any number of times)
for i in range(len(v)):
    for j in range(w[i], C):
        f[j] = max(f[j], f[j - w[i]] + v[i])

print(f)