n, numHome, numWork = map(int, input().split())

for i in range(n):
    toWork, toHome = input().split()
    ans = ""
    
    if toWork == "Y":
        numWork += 1
        numHome -= 1
        ans += "Y"
    elif numWork == 0:
        numWork += 1
        numHome -= 1
        ans += "Y"
    else:
        ans += "N"

    if toHome == "Y":
        numHome += 1
        numWork -= 1
        ans += " Y"
    elif numHome == 0:
        numHome += 1
        numWork -= 1
        ans += " Y"
    else:
        ans += " N"
    print(ans)