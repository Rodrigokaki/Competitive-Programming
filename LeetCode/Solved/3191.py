nums = [0,1,1,1,0,0]

ans = 0

for i in range(len(nums)-2):
    if nums[i] == 0:
        ans += 1
        nums[i] = nums[i] ^ 1
        nums[i+1] = nums[i+1] ^ 1
        nums[i+2] = nums[i+2] ^ 1

if nums[-2] == 1 and nums[-1] == 1:
    print(ans)
print("-1")
