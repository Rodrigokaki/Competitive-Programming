n, inicialTile, spacesLeft = map(int, input().split())

spacesRight = n - (spacesLeft + inicialTile)

used = set()
used.add(inicialTile)

if spacesLeft <= 4:
    for i in range(spacesLeft, 0, -1):
        if i not in used:
            spacesLeft -= i
            used.add(i)
            if spacesLeft > 0:
                for j in range(spacesLeft, 0, -1):
                    if j not in used:
                        spacesLeft -= j
                        used.add(j)
                        break
            break
else:
    spacesLeft = 0

if spacesRight <= 4:
        for i in range(spacesRight, 0, -1):
            if i not in used:
                spacesRight -= i
                used.add(i)
                if spacesRight > 0:
                    for j in range(spacesRight, 0, -1):
                        if j not in used:
                            spacesRight -= j
                            used.add(j)
                            break
                break
else:
    spacesRight = 0

print(spacesLeft+spacesRight)