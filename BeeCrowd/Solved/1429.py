# Problem Factorial Again!

factorial = [0 for _ in range(5)] # 5 because is at most 5 digits
cur = 1
for i in range(len(factorial)):
    factorial[i] = cur
    cur *= i+2

while True:
    num = input()

    if num == '0':
        break
    
    n = len(num)-1
    ans = 0
    for i in range(n,-1,-1):
        digit = num[i]
        ans += (int(digit) * factorial[n-i])

    print(ans)