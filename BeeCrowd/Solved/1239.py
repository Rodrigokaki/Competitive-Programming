try:
    while True:
        entry = input()

        ans = ""
        italyOpen = False
        boldOpen = False
        for caractere in entry:
            if caractere == "_":
                if italyOpen:
                    ans += "</i>"
                    italyOpen = False
                else:
                    ans += "<i>"
                    italyOpen = True
            elif caractere == "*":
                if boldOpen:
                    ans += "</b>"
                    boldOpen = False
                else:
                    ans += "<b>"
                    boldOpen = True
            else:
                ans += caractere

        print(ans)
except EOFError:
    pass