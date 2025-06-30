nums = [0,1,2,3,3,3,4,4,5,6,6,7,7,7,7,8,9,10]
target = 7

l, r = 0, len(nums)-1
higher = 0
while l <= r:
    cur = (l+r)//2
    if nums[cur] <= target:
        l = cur+1
        higher = max(higher,cur)
    else:
        r = cur-1

print(higher)