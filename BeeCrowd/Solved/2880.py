message = input()
crib = input()

nMessage = len(message)
nCrib = len(crib)

ans = nMessage - nCrib + 1

for i in range(nMessage - nCrib + 1):
    for j in range(nCrib):
        if crib[j] != message[i + j]:
            continue
        else:
            ans -= 1
            break
print(ans)