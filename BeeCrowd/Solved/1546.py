times = int(input())

dic = {1: "Rolien", 2: "Naej", 3: "Elehcim", 4: "Odranoel"}

for _ in range(times):
    n = int(input())

    for i in range(n):
        num = int(input())
        print(dic[num])