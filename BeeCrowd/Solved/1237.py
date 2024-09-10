try:
    while(True):
        entry1 = input()
        entry2 = input()

        ans = 0
        for i in range(len(entry1)):
            size = 1
            while i+size <= len(entry1) and entry1[i:i+size] in entry2:
                if size > ans:
                    ans = size
                size += 1

        print(ans)
except EOFError:
    pass