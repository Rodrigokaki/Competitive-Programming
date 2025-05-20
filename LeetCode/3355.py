nums = [4,3,2,1]
queries = [[1,3],[0,2]]

n = len(nums)
numsTimes = [0 for _ in range(n+1)]

for left, right in queries:
    numsTimes[left] += 1
    numsTimes[right+1] -= 1

count = 0
for i in range(n):
    count += numsTimes[i]
    if count < nums[i]:
        return False
return True
