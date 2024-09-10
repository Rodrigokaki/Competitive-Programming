n = int(input(""))

mapa = []

for i in range(n):
    mapaPart = input("")
    mapa.append(mapaPart)

points = 0
biggest = 0

for i in range(n):
    for j in range(n):
        if i % 2 != 0:
            k = n-j-1
        else:
            k = j

        if mapa[i][k] == 'o':
            points += 1
            if points > biggest:
                biggest = points
        elif mapa[i][k] == 'A':
            points = 0

print(biggest)