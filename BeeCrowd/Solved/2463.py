n = int(input())

array = list(map(int, input().split()))

maior, soma = 0, 0

for j in array:
    soma += j
    if soma <= 0:
        soma = 0
    if soma > maior:
        maior = soma

print(maior)