letra = input()

frase = input("").split()

aparecimentos = 0
for i in frase:
    for j in i:
        if j == letra:
            aparecimentos += 1
            break

print(f"{(aparecimentos/len(frase))*100:.1f}")