t = int(input())

for _ in range(t):
    nCows, nCards = map(int, input().split())

    cardsList = [[] for _ in range(nCows)]

    for i in range(nCows):
        cardsList[i] = list(map(int, input().split()))

    ans = [0 for _ in range(nCows)]
    for cowCards in cardsList:
        cowCards.sort()
        if cowCards[0] >= nCows:
            ans = -1
            break
        ans[cowCards[0]] = cardsList.index(cowCards)+1
        for idx in range(1, len(cowCards)):
            if cowCards[idx] != cowCards[idx-1] + nCows:
                ans = -1
                break
        if ans == -1:
            break

    if ans == -1:
        print(ans)
    else:
        for i in range(len(ans)-1):
            print(ans[i], end=" ")
        print(ans[-1])
        
