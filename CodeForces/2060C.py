from collections import defaultdict

for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    hashmap = defaultdict(int)
    ans = 0
    for num in arr:
        if hashmap[k-num] > 0:
            ans += 1
            hashmap[k-num] -= 1
        else:
            hashmap[num] += 1

    print(ans)