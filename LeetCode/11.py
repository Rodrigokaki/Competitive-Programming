# 11. Container With Most Water

height = [1,8,6,2,5,4,8,3,7]

# Solution
n = len(height)
left, right = 0, (n-1)
ans = 0
while left < right:
    volume = min(height[left], height[right]) * (right-left)
    ans = max(ans, volume)

    if height[left] > height[right]:
        right -= 1
    else:
        left += 1

print(ans) # return ans