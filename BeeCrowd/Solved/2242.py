risada = input()

risadaVogais = ""
for letra in risada:
    if letra == "a" or letra == "e" or letra == "i" or letra == "o" or letra == "u":
        risadaVogais += letra

ans = True
for i in range(len(risadaVogais)):
    if risadaVogais[len(risadaVogais)-1-i] == risadaVogais[i]:
        continue
    else:
        ans = False
        break

print("S" if ans else "N")