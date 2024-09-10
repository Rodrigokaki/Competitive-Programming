n = int(input())

balloons = list(map(int, input().split()))

hashmap = [0 for _ in range(1000001)]

shots = 0
for i in range(n):
    balloonHeight = balloons[i]

    if hashmap[balloonHeight] == 0:
        shots += 1
    else:
        hashmap[balloonHeight] -= 1
    hashmap[balloonHeight-1] += 1

print(shots)