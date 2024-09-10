n = int(input())

array = list(map(int, input().split()))

for j in range(n, 0, -1):
    for i in range(j-1):
        if array[i] + array[i+1] == 0:
            array[i] = -1
        else:
            array[i] = 1

print("preta" if array[0] == 1 else "branca")