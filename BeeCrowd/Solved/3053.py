n = int(input())
start = input()

if start == 'A':
    game = [1,0,0]
elif start == 'B':
    game = [0,1,0]
else:
    game = [0,0,1]


for i in range(n):
    move = int(input())

    if move == 1 and (game[0] == 1 or game[1] == 1):
        game[0] = game[0] ^ 1
        game[1] = game[1] ^ 1
    elif move == 2 and (game[1] == 1 or game[2] == 1):
        game[1] = game[1] ^ 1
        game[2] = game[2] ^ 1
    elif move == 3 and (game[0] == 1 or game[2] == 1):
        game[0] = game[0] ^ 1
        game[2] = game[2] ^ 1

if game == [1,0,0]:
    print("A")
elif game == [0,1,0]:
    print("B")
else:
    print("C")