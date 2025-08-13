# Problem Bingo!

while True:
    n, nBalls = list(map(int, input().split()))

    if n == 0 and nBalls == 0:
        break

    balls = list(map(int, input().split()))

    possible = set()
    for i in range(nBalls-1):
        for j in range(i, nBalls):
            possible.add(abs(balls[i] - balls[j]))

    ans = 'Y'
    for num in range(1, n+1):
        if num not in possible:
            ans = 'N'

    print(ans)