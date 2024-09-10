entry = list(map(int, input().split()))

error = False
for i in entry:
    if i == 9:
        error = True
        break

print("F" if error else "S")