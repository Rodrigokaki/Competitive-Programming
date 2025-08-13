# Problem Flowers Flourish from France

while True:
    words = list(input().split())
    if words[0] == '*':
        break
    letter = words[0][0].lower()

    ans = "Y"
    for word in words:
        if word[0].lower() != letter:
            ans = "N"
    print(ans)
