while True:
    digit, number = list(input().split())

    if digit == "0" and number == "0":
        break

    ans = ""
    for i in number:
        if i == digit or (ans == "" and i == "0"):
            continue
        else:
            ans += i

    if ans == "":
        ans = "0"

    print(ans)