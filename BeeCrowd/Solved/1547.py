times = int(input())

for _ in range(times):
    n, target = map(int, input().split())

    numList = list(map(int, input().split()))

    lowest = abs(target-numList[0])
    closest = 0
    for i in range(1, len(numList)):
        difference = abs(target-numList[i])
        if difference < lowest:
            lowest = difference
            closest = i
    
    print(closest+1)