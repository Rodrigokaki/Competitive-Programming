# 55. Jump Game

nums = [2,0]

# Solution
n = len(nums)
if n == 1:
    print("True") # return True

if nums[0] == 0:
    print("False") # return False

idx = 1
while idx < n:
    zeroCount = 0
    if nums[idx] == 0:
        left = idx-1
        while nums[idx] == 0 and idx < n-1:
            zeroCount += 1
            idx += 1

        for i in range(left, -1, -1):
            if nums[i] >= idx-i:
                break
            elif i == 0:
                print("False") # return False
    idx += 1

print("True") # return True