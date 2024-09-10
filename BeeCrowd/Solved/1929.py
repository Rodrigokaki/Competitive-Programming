lista = map(int, input("").split())

lista = sorted(lista)

print("S" if (lista[0]+lista[1] > lista[2] or lista[1] + lista[2] > lista[3]) else "N") 