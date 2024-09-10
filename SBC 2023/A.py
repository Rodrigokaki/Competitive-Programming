from collections import defaultdict

nSup = int(input())
suppliers = [[] * nSup]
for i in range(nSup):
    entry = list(map(int, input().split()))

    suppliers[i].append(entry)

profitSupplier = [0] * nSup

clients = defaultdict(int)
clientsPriceOrder = []

n = int(input())
for i in range(n):
    entry = list(map(int, input().split()))

    if entry[0] == "c":
        if clients[entry[2]] < entry[1]:
            clients[entry[2]] = entry[1]
            clientsPriceOrder.append(entry[2])
            clientsPriceOrder.sort(reverse=True)
            for clientPrice in clientsPriceOrder:
                for supplier in range(nSup-1, -1, -1):
                    supplierStartDay = suppliers[supplier][0]
                    supplierPrice = suppliers[supplier][-1]
                    clientFinalDay = clients[clientPrice]

                    if supplierStartDay > clientFinalDay:
                        continue

                    profitSupplier[supplier] = asdasdasdasdasdasdd