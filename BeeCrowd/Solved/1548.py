times = int(input())

for _ in range(times):
    n = int(input())
    studentList = list(map(int, input().split()))
    studentListSorted = studentList[:]
    studentListSorted.sort(reverse=True)

    ans = 0
    for i in range(n):
        if studentList[i] == studentListSorted[i]:
            ans += 1

    print(ans)