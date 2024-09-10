entry = input("").split()

wordsLen2 = "be"
wordsLen3 = ["our","rum"]
wordsLen4 = ["will","dead","hook","ship"]
wordsLen5 = ["blood","sable"]
wordsLen6 = ["avenge","parrot"]
wordsLen7 = "captain"

mapa = {}

def testarPalavra(palavra):
    global mapa
    palavraNova = ""
    for i in range(len(palavra)):
        palavraNova += mapa[palavra[i]]
    
    if len(palavraNova) == 2:
        if palavraNova == wordsLen2:
            return True
    elif len(palavraNova) == 3:
        for i in wordsLen3:
            if palavraNova == i:
                return True
    elif len(palavraNova) == 4:
        for i in wordsLen4:
            if palavraNova == i:
                return True
    elif len(palavraNova) == 5:
        for i in wordsLen5:
            if palavraNova == i:
                return True
    elif len(palavraNova) == 6:
        for i in wordsLen6:
            if palavraNova == i:
                return True
    elif len(palavraNova) == 7:
        if palavraNova == wordsLen7:
            return True
    return False

def testarFrase(indexPalavra):
    global mapa
    lista = entry[0:indexPalavra+1]
    for i in lista:
        if testarPalavra(i) == False:
            return False
    return True
        


# finding map
def findMap(entry):
    for i in range(len(entry)):
        for j in range(len(entry[i])):
            if len(entry[i]) == 2:
                mapa[entry[i][j]] = wordsLen2[j]
            elif len(entry[i]) == 7:
                mapa[entry[i][j]] = wordsLen7[j]
        if len(entry[i]) == 3:
            for j in range(len(wordsLen3)):
                for k in range(3):
                    mapa[entry[i][k]] = wordsLen3[j][k]
                if testarFrase(i) == True:
                    break
        elif len(entry[i]) == 4:
            for j in range(len(wordsLen4)):
                for k in range(4):
                    mapa[entry[i][k]] = wordsLen4[j][k]
                if testarFrase(i) == True:
                    break
        elif len(entry[i]) == 5:
            for j in range(len(wordsLen5)):
                for k in range(5):
                    mapa[entry[i][k]] = wordsLen5[j][k]
                if testarFrase(i) == True:
                    break
        elif len(entry[i]) == 6:
            for j in range(len(wordsLen6)):
                for k in range(6):
                    mapa[entry[i][k]] = wordsLen6[j][k]
                if testarFrase(i) == True:
                    break
                


findMap(entry)

print(mapa)
print(testarFrase(len(entry)))
