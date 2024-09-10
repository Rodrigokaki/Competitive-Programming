def possivel(x, y):
    if x < 0 or y < 0 or x > n-1 or y > n-1 or visitado[x][y]:
        return False
    return True

def testar(x, y):
    if possivel == False:
        return 0
    naoSeguro = 1
    visitado[x][y] = True
    if possivel(x-1, y) and matriz[x-1][y] == "V":
        naoSeguro += testar(x-1, y)
    if possivel(x+1, y) and matriz[x+1][y] == "A":
        naoSeguro += testar(x+1, y)
    if possivel(x, y-1) and matriz[x][y-1] == ">":
        naoSeguro += testar(x, y-1)
    if possivel(x, y+1) and matriz[x][y+1] == "<":
        naoSeguro += testar(x, y+1)
    return naoSeguro


n = int(input())
resposta = n*n
matriz = []
visitado = [[False for _ in range(n)] for _ in range(n)]
for i in range(n):
    matriz.append(input())

for i in range(n):
    if matriz[0][i] == "A":
        resposta -= testar(0, i)
    if matriz[i][0] == "<":
        resposta -= testar(i, 0)
    if matriz[n-1][i] == "V":
        resposta -= testar(n-1, i)
    if matriz[i][n-1] == ">":
        resposta -= testar(i, n-1)

print(resposta)