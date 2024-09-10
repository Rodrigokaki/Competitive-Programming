tamA, tamB = map(int, input().split())

listaA = list(map(int, input().split()))

listaB = list(map(int, input().split()))


def validar(num):
    for i in range(tamA):
        if listaA[i] == num:
            return 1
    
    hashTable = []

    for i in range(tamB):
        somaMenosElemento = num - listaB[i]
        hashTable.append(listaB[i])
        if somaMenosElemento in hashTable:
            return 1
    return 0

tamListaBReal = len(listaB)

erro = 0

for i in range(tamB):
    if validar(listaB[i]) == 1:
        continue
    else:
        print(listaB[i])
        erro = 1
        break

if erro == 0:
    print("sim")