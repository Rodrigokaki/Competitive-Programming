from collections import defaultdict

n = int(input())

cardsJoao = list(map(int, input().split()))
cardsMaria = list(map(int, input().split()))

cardsComum = list(map(int, input().split()))

hashmap = defaultdict(int)

pointsJoao = 0
pointsMaria = 0

for i in range(2):
    hashmap[cardsJoao[i]] += 1
    pointsJoao += cardsJoao[i] if cardsJoao[i] <= 10 else 10

    hashmap[cardsMaria[i]] += 1
    pointsMaria += cardsMaria[i] if cardsMaria[i] <= 10 else 10

for num in cardsComum:
    hashmap[num] += 1
    pointsJoao += num if num <= 10 else 10
    pointsMaria += num if num <= 10 else 10

outOfTheGame = set()
for i in hashmap.keys():
    if hashmap[i] == 4:
        outOfTheGame.add(i)

def findSmallestCard(pointsJoao, pointsMaria):
    ans = 0
    while (pointsMaria <= 23 and ans <= 10):
        if pointsMaria == 23 and ans not in outOfTheGame:
            return ans
        elif pointsJoao >= 24 and ans not in outOfTheGame:
            return ans
        pointsJoao += 1
        pointsMaria += 1
        ans += 1
    return -1

print(findSmallestCard(pointsJoao, pointsMaria))

