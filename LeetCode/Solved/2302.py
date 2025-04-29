nums = [2,1,4,3,5]
k = 10

n = len(nums)
left, right = 0,1
ans = 0
curSum = nums[0]

while right <= n:
    if (curSum * (right-left)) < k:
        right += 1
        if right <= n:
            curSum += nums[right-1]
    else:
        ans += right-left-1
        curSum -= nums[left]
        left += 1

ans += sum(i for i in range((right-left)-1,-1,-1))

print(ans)