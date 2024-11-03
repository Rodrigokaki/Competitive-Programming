def shiftLetter(letter, amount):
    letterNumber = ord(letter)-amount

    if letterNumber < 65:
        letterNumber += 26

    return chr(letterNumber)

t = int(input())

for _ in range(t):
    cipher = input()
    shift = int(input())
    
    ans = ""
    for letter in cipher:
        ans += shiftLetter(letter, shift)

    print(ans)