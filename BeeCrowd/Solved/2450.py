x, y = map(int, input().split())

matriz = []

def testarAbaixoIgualZero(x1, y1):
    global matriz, x, y
    for j in range(x1+1 ,x):
        if matriz[j][y1] != 0:
            return False
    return True

def testeEscada(matriz):
    for i in range(x):
        linhaZerada = True
        for j in range(y):
            if matriz[i][j] != 0:
                linhaZerada = False
                if testarAbaixoIgualZero(i, j) == False:
                    return False
                break
        if linhaZerada == True:
            for j in range(i+1,x):
                for k in range(y):
                    if matriz[j][k] != 0:
                        return False
            return True
    return True

for i in range(x):
    entry = list(map(int, input().split()))
    matriz.append(entry)

print("S" if testeEscada(matriz) else "N")
