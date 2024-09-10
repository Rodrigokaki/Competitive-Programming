numPessoas = int(input())

fila = list(map(int, input().split()))

numSaidas = int(input())

listaSaidas = list(map(int, input().split()))

for i in listaSaidas:
    fila.remove(i)

for i in range(len(fila)):
    if i == len(fila)-1:
        print(fila[i])
        break
    print(fila[i], end=" ")