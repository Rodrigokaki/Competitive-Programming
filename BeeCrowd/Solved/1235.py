n = int(input())

for i in range(n):
    frase = input()

    ans = ""
    for j in range(len(frase)//2-1, -1, -1):
        ans += frase[j]
    for j in range(len(frase)-1, len(frase)//2-1, -1):
        ans += frase[j]

    print(ans)