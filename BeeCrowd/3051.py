n, k = map(int,input().split())
arr = list(map(int,input().split()))

l = 0
ans = 0
sum = 0
for r in range(n):
    sum += arr[r]
    if sum == k:
        ans += 1
    elif sum > k:
        while sum > k:
            sum -= arr[l]
            l += 1

print(ans)