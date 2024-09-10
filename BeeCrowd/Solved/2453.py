frase = input().split()

mensagem = ""
for i in frase:
    for j in range(len(i)):
        if j & 1:
            mensagem += i[j]
    if i == frase[-1]:
        break
    mensagem += " "

print(mensagem)