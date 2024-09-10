try:
    while(True):
        frase = input()
        ans = ""
        upper = True
        for caractere in frase:
            if caractere == " ":
                ans += " "
                continue
            elif upper:
                ans += caractere.capitalize()
                upper = False
            else:
                ans += caractere.lower()
                upper = True

        print(ans)

except EOFError:
    pass