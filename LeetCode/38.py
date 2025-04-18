n = 30

def f(numString):
    ans = ""
    i = 0
    while i < len(numString):
        num = numString[i]
        curNum = num
        amount = 1
        for j in range(i+1,len(numString)+1):
            i = j
            if j == len(numString):
                i += 1
                break
            if numString[j] == curNum:
                amount += 1
                continue
            break
        ans += f"{amount}{curNum}"
    return ans

ans = "1"
if n == 1:
    print(ans)
else:
    for i in range(n-1):
        ans = f(ans)
    print(ans)