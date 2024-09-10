#Vou fazer normal pra ver no que da, com uma contagem usando hash

#Resultado: Obviamente uma matriz 100000x100000 estourou o limite de memoria (Ja que isso da 40 GB KKKKKKKKKKKKKKKKKKK)

nMatrix, n = map(int, input().split())

matrix = [[0 for _ in range(nMatrix)] for _ in range(nMatrix)]

def countLine(line):
    hashtable = [0 for _ in range(50)]

    higher = 0
    numHigher = -1
    for i in range(nMatrix):
        num = matrix[line][i]
        hashtable[num] += 1

        if hashtable[num] == higher and num > numHigher:
            numHigher = num
        elif hashtable[num] > higher:
            higher = hashtable[num]
            numHigher = num

    return numHigher

def countCol(col):
    hashtable = [0 for _ in range(50)]

    higher = 0
    numHigher = -1
    for i in range(nMatrix):
        num = matrix[i][col]
        hashtable[num] += 1
        
        if hashtable[num] == higher and num > numHigher:
            numHigher = num
        elif hashtable[num] > higher:
            higher = hashtable[num]
            numHigher = num

    return numHigher


for i in range(n):
    entry = list(map(int, input().split()))
    if entry[0] == 1:
        for j in range(nMatrix):
            matrix[entry[1]-1][j] = entry[2]
    elif entry[0] == 2:
        for j in range(nMatrix):
            matrix[j][entry[1]-1] = entry[2]
    elif entry[0] == 3:
        print(countLine(entry[1]-1))
    elif entry[0] == 4:
        print(countCol(entry[1]-1))