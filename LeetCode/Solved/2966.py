nums = [1,3,4,8,7,9,3,5,1]
k = 2

n = len(nums)
nums.sort()
ans = []

for i in range(0,n-2,3):
    if nums[i+2] - nums[i] > k:
        ans = []
        return ans
    ans.append(nums[i:i+3])
return ans