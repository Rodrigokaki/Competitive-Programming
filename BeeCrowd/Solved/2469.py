n = int(input())

notas = list(map(int, input().split()))

hashmap = [-1 for _ in range(101)]

for i in notas:
    hashmap[i] += 1

maior = 0
maiorN = 0
for i in range(101):
    if hashmap[i] == -1:
        continue
    if hashmap[i] >= maior:
        maior = hashmap[i]
        maiorN = i

print(maiorN)