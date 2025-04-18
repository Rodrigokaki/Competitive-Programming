base = int(input())
cealing = int(input())

leftArea = (max(base,cealing)*70) - ((abs(base - cealing)*70)/2)
rightArea = (160*70) - leftArea

if leftArea > rightArea:
    print("1")
elif rightArea > leftArea:
    print("2")
else:
    print("0")