lista = list(map(int, input("").split()))

if lista == sorted(lista):
    print("C")
elif lista == sorted(lista, reverse=True):
    print("D")
else:
    print("N")