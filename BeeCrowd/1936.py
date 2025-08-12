# Non optimal solution, using knapsack.
# In this problem you can use a simple greedy taking first the maximum amount of the highest factorial
# and going down to the lowest factorial.
# In this case you can do this way because all the numbers are multiples (Because of the nature of factorial numbers)

factorials = [0 for _ in range(8)] # 8 because the input is at most 10^5
factorials[0] = 1

for i in range(1,len(factorials)):
    factorials[i] = factorials[i-1] * (i+1)

target = int(input())

dp = [-1 for _ in range(target + 1)]
dp[0] = 0

for i in range(len(factorials)):
    for j in range(factorials[i], target + 1):
        if dp[j - factorials[i]] >= 0:
            if dp[j] >= 0:
                dp[j] = min(dp[j], dp[j - factorials[i]] + 1)
            else:
                dp[j] = dp[j - factorials[i]] + 1

print(dp[-1])