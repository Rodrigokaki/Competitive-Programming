chave = input()

cod = input()

resposta = ""

for i in cod:
    resposta += chave[ord(i)-97]

print(resposta)