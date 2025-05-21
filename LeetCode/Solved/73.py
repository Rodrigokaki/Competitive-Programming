matrix = [[1,1,1],[1,0,1],[1,1,1]]

rowsToZero = set()
columnsToZero = set()
for row in range(len(matrix)):
    for column in range(len(matrix[0])):
        if matrix[row][column] == 0:
            rowsToZero.add(row)
            columnsToZero.add(column)

for i in rowsToZero:
    for column in range(len(matrix[0])):
        matrix[i][column] = 0

for i in columnsToZero:
    for row in range(len(matrix)):
        matrix[row][i] = 0

print(matrix)