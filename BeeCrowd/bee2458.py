naoSeguras = 0
visitadas = []
visitadasNaoSeguras = []
def procurarSeguras(i, j):
    global naoSeguras

    if (i, j) in visitadasNaoSeguras:
        return False

    if (i, j) in visitadas:
        return
    
    visitadas.append((i, j))

    if i < 0 or i > n-1 or j < 0 or j > n-1:
        return False

    match matriz[i][j]:
        case "A":
            if procurarSeguras(i-1, j) == False:
                visitadasNaoSeguras.append((i,j))
                naoSeguras += 1
                return False
        case ">":
            if procurarSeguras(i, j+1) == False:
                visitadasNaoSeguras.append((i,j))
                naoSeguras += 1
                return False
        case "<":
            if procurarSeguras(i, j-1) == False:
                visitadasNaoSeguras.append((i,j))
                naoSeguras += 1
                return False
        case "V":
            if procurarSeguras(i+1, j) == False:
                visitadasNaoSeguras.append((i,j))
                naoSeguras += 1
                return False


n = int(input())

matriz = [[0 for _ in range(n)] for _ in range(n)]

for i in range(n):
    entry = input()
    for j in range(len(entry)):
        matriz[i][j] = entry[j]


for i in range(n):
    for j in range(n):
        procurarSeguras(i, j)
print((n*n)-naoSeguras)

