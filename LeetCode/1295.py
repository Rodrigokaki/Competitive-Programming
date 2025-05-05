nums = [12,345,2,6,7896]
ans = 0

for num in nums:
    if len(str(num)) % 2 == 0:
        ans += 1

print(ans)