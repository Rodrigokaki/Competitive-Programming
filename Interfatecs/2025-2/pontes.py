a, b, c = list(map(int, input().split()))

if a > b:
    higher = a
    lower = b
else:
    higher = b
    lower = a

impossible = True
for higherAmount in range((c//higher), -1, -1):
    sobra = c - (higher*higherAmount)
    if sobra % lower == 0:
        impossible = False
        if higher == a:
            print(f'{higherAmount} {sobra//lower}')
        else:
            print(f'{sobra//lower} {higherAmount}')
        break

if impossible:
    print('IMPOSSIVEL')