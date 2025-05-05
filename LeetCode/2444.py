nums = [1,1,1,1]
minK = 1
maxK = 1

ans = 0
minKCount = 0
maxKCount = 0
left, right = 0, 0

while right < len(nums):
    if nums[right] > maxK or nums[right] < minK:
        right += 1
        left = right
        continue

    if nums[right] == minK:
        minKCount += 1
    if nums[right] == maxK:
        maxKCount += 1

    right += 1
    if right >= len(nums):
        break
    if minKCount >= 1 and maxKCount >= 1:
        ans += 1
        if nums[right] > maxK or nums[right] < minK:
            while True:
                if nums[left] == minK:
                    minKCount -= 1
                if nums[left] == maxK:
                    maxKCount -= 1
                left += 1
                if minKCount >= 1 and maxKCount >= 1:
                    ans += 1
                else:
                    break


print(ans)
            
