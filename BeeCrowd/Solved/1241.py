t = int(input())

for _ in range(t):
    num1, num2 = input().split()

    difference = len(num1)-len(num2)

    ans = "encaixa"
    for index in range(len(num2)-1,-1,-1):
        if num1[index + difference] != num2[index]:
            ans = "nao encaixa"
            break

    print(ans)