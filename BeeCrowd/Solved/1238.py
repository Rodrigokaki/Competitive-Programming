n = int(input())

for _ in range(n):
    entry1, entry2 = input().split()

    maior = len(entry1)
    if len(entry2) > maior:
        maior = len(entry2)

    ans = ""
    for i in range(maior):
        if i < len(entry1):
            ans += entry1[i]
        if i < len(entry2):
            ans += entry2[i]

    print(ans)