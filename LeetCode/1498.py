nums = [3,5,6,7]
target = 9

nums.sort()
MODULO = (10**9) + 7
n = len(nums)
ans = 0

for i in range(n):
    if nums[i]*2 > target:
        break
    l,r = i,n-1
    higher = 0
    while l <= r:
        cur = ((l+r)//2)
        if nums[i] + nums[cur] <= target:
            l = cur+1
            higher = max(higher,cur)
        else:
            r = cur-1

    ans += (2**(higher-i)) % MODULO
    ans = ans % MODULO 

print(ans)