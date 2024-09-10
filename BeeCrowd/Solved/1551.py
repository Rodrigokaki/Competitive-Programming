n = int(input())

for _ in range(n):
    entry = input()

    seen = set()

    for letter in entry:
        if letter not in seen and ord(letter) >= ord("a") and ord(letter) <= ord("z"):
            seen.add(letter)
    
    if len(seen) == 26:
        print("frase completa")
    else:
        print("frase mal elaborada" if len(seen) < 13 else "frase quase completa")