n, targetSum = int(input().split())
nums = list(map(int, input().split()))

right = 0
curSum = 0
for left in range(n):
    while right < n and curSum < targetSum:
        