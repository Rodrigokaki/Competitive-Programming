answer = list(map(int, input().split()))
entry = list(map(int, input().split()))

right = 0
for i in entry:
    if i in answer:
        right += 1

if right == 6:
    print("sena")
elif right == 5:
    print("quina")
elif right == 4:
    print("quadra")
elif right == 3:
    print("terno")
else:
    print("azar")