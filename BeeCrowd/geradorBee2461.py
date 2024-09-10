import os
import random

path = "C:\\Users\\Asus\\OneDrive\\Área de Trabalho\\Programaçao\\Python\\Treino\\texto.txt"

if os.path.exists(path):
    print("Arquivo reconhecido")
else:
    print("Arquivo nao reconhecido")

tamA, tamB = map(int, input().split())

file = open(path, "w")

file.write(f"{tamA} {tamB}\n")

listaA = []
for i in range(tamA):
    randA = random.randint(1,1000)
    file.write(f"{randA} ")
    listaA.append(randA)
file.write("\n")

listaB = []
for i in range(tamB):
    if random.randint(1,4) == 1 or i == 0:
        randB = listaA[random.randint(0,len(listaA)-1)]
        file.write(f"{randB} ")
        listaB.append(randB)
    else:
        randB = listaB[random.randint(0,len(listaB)-1)] + listaB[random.randint(0,len(listaB)-1)]
        file.write(f"{randB} ")
        listaB.append(randB)

file.write("\n")