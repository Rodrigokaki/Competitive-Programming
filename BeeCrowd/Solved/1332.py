t = int(input())

for _ in range(t):
    entry = input()

    if len(entry) > 3:
        print("3")
        continue

    lettersONE = 0
    lettersTWO = 0
    if entry[0] == "o":
        lettersONE += 1
    elif entry[0] == "t":
        lettersTWO += 1

    if entry[1] == "n":
        lettersONE += 1
    elif entry[1] == "w":
        lettersTWO += 1

    if entry[2] == "e":
        lettersONE += 1
    elif entry[2] == "o":
        lettersTWO += 1

    if lettersONE > lettersTWO:
        print("1")
    else:
        print("2")