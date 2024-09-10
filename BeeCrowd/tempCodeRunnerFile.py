def sol():
    nInter , nLampadas = map(int, input().split())

    lampadasAcessas = list(map(int, input().split()))
    nLampadasAcessas = lampadasAcessas[0]
    lampadasAcessas = lampadasAcessas[1:]
    lampadas = [0] * nLampadas

    for i in lampadasAcessas:
        lampadas[i-1] = 1

    ans = -1
    for i in range(nInter):
        entry = list(map(int, input().split()))
        entry = entry[1:]

        for j in entry:
            j = j-1
            if lampadas[j] == 0:
                lampadas[j] = 1
                nLampadasAcessas += 1
            else:
                lampadas[j] = 0
                nLampadasAcessas -= 1

        if nLampadasAcessas == 0 and ans == -1:
            ans = i+1
    return ans

print(sol())