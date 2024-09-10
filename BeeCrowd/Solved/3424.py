n = int(input())

entry = input()

ans = 0
i = 0
while i < len(entry)-1:
    if entry[i] == "a" and entry[i+1] == "a":
        while entry[i] == "a":
            ans += 1
            i += 1
            if i >= len(entry):
                break
    i += 1
print(ans)