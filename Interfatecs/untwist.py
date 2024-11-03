#Codigo pego de: https://github.com/Loukis-13/InterFatecs/blob/master/InterFatecs2022_Fase2/untwist/untwist.py

import string

CODIGO_BASE = f"-{string.ascii_lowercase}."

while (f := input()) != "0":
    k, f = f.split()
    k = int(k)

    n = len(f)
    codigo_base = [0 for _ in range(n)]
    codigo_cifrado = [CODIGO_BASE.index(i) for i in f]

    for i in range(n):
        codigo_base[(k*i)%n] = (codigo_cifrado[i] + i) % 28

    print("".join(CODIGO_BASE[i] for i in codigo_base))
