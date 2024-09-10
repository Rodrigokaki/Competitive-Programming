numCidades, numFerrovias, numRodovias = map(int, input().split())

cidades = [0 for _ in range(numCidades)]

precoTotal = 0
cidadesFerrovia = []
precosFerrovia = []
cidadesRodovia = []
precosRodovia = []

for i in range(numFerrovias):
    cidade1, cidade2, preco = map(int, input().split())
    cidadesFerrovia.append((cidade1, cidade2))
    precosFerrovia.append(preco)

for i in range(numRodovias):
    cidade1, cidade2, preco = map(int, input().split())
    cidadesRodovia.append((cidade1, cidade2))
    precosRodovia.append(preco)


    