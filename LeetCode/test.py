W = 7
v = [5, 2, 2, 4, 3]
w = [4, 3, 1, 3, 2]

dp = [0 for _ in range(W+1)]
# 0-1 Knapsack
# for i in range(0, len(v)):
#   for j in range(W, w[i]-1, -1):
#     dp[j] = max(dp[j], dp[j - w[i]] + v[i])

# Complete knapsack
for i in range(0, len(v)):
    for j in range(w[i], W+1):
        dp[j] = max(dp[j], dp[j - w[i]] + v[i])

print(dp)