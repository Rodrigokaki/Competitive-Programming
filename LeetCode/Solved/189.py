# 189. Rotate Array

nums = [1,2,3,4,5,6,7]
k = 3

# Solution
n = len(nums)
nums2 = nums[:]
nums2.extend(nums)

k = k % n

nums[:] = nums2[n-k:(2*n)-k]

print(nums)