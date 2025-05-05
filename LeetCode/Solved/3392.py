nums = [1,1,1]

ans = 0
for i in range(len(nums)-2):
    if nums[i+1] & 1:
        continue

    if nums[i] + nums[i+2] == (nums[i+1]/2):
        ans += 1

print(ans)
