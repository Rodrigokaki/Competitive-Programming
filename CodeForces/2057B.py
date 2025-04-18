from collections import defaultdict

t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    hashmap = defaultdict(int)
    for num in arr:
        hashmap[num] += 1

    amounts = list(hashmap.values())
    amounts.sort()

    ans = len(list(hashmap.keys()))
    
    for amount in amounts:
        if k >= amount and ans > 1:
            k -= amount
            ans -= 1
        else:
            break

    print(ans)
