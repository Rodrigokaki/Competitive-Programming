import math

def calcDistance(point1, point2):
    x = abs(point1[0] - point2[0])
    y = abs(point1[1] - point2[1])

    distance = math.sqrt((x**2)+(y**2))
    return distance

cases = int(input())

for _ in range(cases):
    n = int(input())
    persons = [0] * n
    for i in range(n):
        persons[i] = list(map(int, input().split()))


    closestHash = [[None, None]] * (n-1)
    for i in range(n-1):
        closest = 0
        for j in range(i, n):
            if i == j:
                continue
            
            distance = calcDistance(persons[i], persons[j])

            if closest == 0 or distance < closest:
                    closest = distance
                    closestHash[i] = [j, distance]
    
    sum = 0
    for i in range(n-1):
        sum += closestHash[i][1]

    ans = sum/100
    print(f"{ans:.2f}")