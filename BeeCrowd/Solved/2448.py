nCasas, nEntregas = map(int, input().split())


lCasas = list(map(int, input().split()))

entregas = list(map(int, input().split()))

dic = {}

for i in range(nCasas):
    dic[lCasas[i]] = i

distancia = abs(dic[entregas[0]])
for i in range(1,len(entregas)):
    distancia += abs(dic[entregas[i]] - dic[entregas[i-1]])

print(distancia)