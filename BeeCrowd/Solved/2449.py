nPinos, tamanho = map(int, input("").split())

listaPinos = list(map(int, input("").split()))

total = 0
for i in range(nPinos-1):
    diferenca = tamanho - listaPinos[i]
    listaPinos[i] += diferenca
    listaPinos[i+1] += diferenca
    total += abs(diferenca)
    
print(total)