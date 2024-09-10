a,b,c = map(int, input().split())

if a == b or a == c or b == c:
    print("S")
elif a == b+c or b == c+a or c == a+b:
    print("S")
else:
    print("N")
