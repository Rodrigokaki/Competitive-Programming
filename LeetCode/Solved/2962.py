nums = [1,3,2,3,3]
k = 2

target = max(nums)
n = len(nums)
ans = 0

count = 0
left, right = 0, 0
while right < n:
    if nums[right] == target:
        count += 1

    while count >= k:
        ans += n-right
        if nums[left] == target:
            count -= 1
        left += 1
    
    right += 1
    
print(ans)



