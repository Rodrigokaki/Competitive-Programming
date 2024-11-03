from collections import deque

while(True):
    entry = int(input())
    if(entry == 0):
        break

    deck = deque()
    for i in range(entry):
        deck.appendleft(i+1)

    discarded = []

    while(len(deck) > 1):
        discarded.append(deck.pop())
        deck.appendleft(deck.pop())

    print("Discarded cards:", end="")
    for i in range(len(discarded)):
        num = discarded[i]
        print(f" {num}", end="")
        if i == len(discarded)-1:
            break
        else:
            print(",", end="")
    print()
        
    print(f"Remaining card: {deck[0]}")



