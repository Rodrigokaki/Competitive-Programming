porta1, porta2 = map(int, input().split())

if porta1 == 0:
    print("C")
elif porta1 == 1 and porta2 == 0:
    print("B")
else:
    print("A")