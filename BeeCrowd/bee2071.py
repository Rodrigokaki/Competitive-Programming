n = int(input())

matrix = [[] for _ in range(n)]

for i in range(n):
    entry = list(map(int, input().split()))

    matrix[i] = entry

def findSum():
    aparitions = []
    for i in range(3):
        sum = 0
        for j in range(n):
            sum += matrix[i][j]
        if sum in aparitions:
            return sum
        else:
            aparitions.append(sum)

magicNum = findSum()

def findLine():
    for i in range(n):
        sum = 0
        for j in range(n):
            sum += matrix[i][j]
        if sum != magicNum:
            return i
        
def findCol():
    for i in range(n):
        sum = 0
        for j in range(n):
            sum += matrix[j][i]
        if sum != magicNum:
            return i
        
line = findLine()
col = findCol()

sum = 0
for j in range(n):
    sum += matrix[line][j]

ans = matrix[line][col] + (magicNum - sum)

print(f"{ans} {matrix[line][col]}")
