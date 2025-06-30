nums = [1,2,4]

ans = abs(nums[0]-nums[-1])
for i in range(1, len(nums)):
    ans = max(ans, abs(nums[i]-nums[i-1]))

print(ans)