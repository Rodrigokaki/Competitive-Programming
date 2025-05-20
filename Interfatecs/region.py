nRangeValidos = int(input())

rangeValidos = [[0, 0] for _ in range(nRangeValidos)]

for i in range(nRangeValidos):
    entry = list(input().split())
    entry1 = int(entry[0][0:5] + entry[0][6:])
    entry2 = int(entry[1][0:5] + entry[1][6:])

    rangeValidos[i][0], rangeValidos[i][1] = min(entry1, entry2), max(entry1, entry2)

validos = []
invalidos = []

t = int(input())
for i in range(t):
    entry = input()
    entry1 = int(entry[0:5] + entry[6:])

    valido = False
    for j in range(nRangeValidos):
        if entry1 >= rangeValidos[j][0] and entry1 <= rangeValidos[j][1]:
            validos.append(entry1)
            valido = True
            break
    
    if not valido:
        invalidos.append(entry1)


validos.sort()
invalidos.sort()

for i in range(len(validos)):
    out = str(validos[i])
    while len(out) < 8:
        out = '0'+out
    print(f'{out[0:5]}-{out[5:]} is served by our delivery system')

for i in range(len(invalidos)):
    out = str(invalidos[i])
    while len(out) < 8:
        out = '0'+out
    print(f'{out[0:5]}-{out[5:]} is not served by our delivery system')