p1Points, p2Points = 0, 0
while True:
    p1, p2 = list(input().split())

    if p1 == '-' and p2 == '-':
        break

    if (p1 == 'V' and p2 == 'O') or (p1 == 'O' and p2 == '*') or (p1 == '*' and p2 == 'V'):
        p1Points += 1
    elif (p2 == 'V' and p1 == 'O') or (p2 == 'O' and p1 == '*') or (p2 == '*' and p1 == 'V'):
        p2Points += 1

if p1Points > p2Points:
    print("BEATRIZ WIN")
elif p2Points > p1Points:
    print("ARTUR WIN")
else:
    print("TIE")