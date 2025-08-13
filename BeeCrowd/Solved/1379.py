# Problem Mean Median Problem

while True:
    num1, num2 = list(map(int, input().split()))

    if num1 == 0 and num2 == 0:
        break

    if num1 > num2:
        num1, num2 = num2, num1

    ans = num1 - (num2 - num1)
    print(ans)