t = int(input())

for _ in range(t):
    n = int(input())

    ans = "YES"
    arr = list(map(int, input().split()))
    for idx, num in enumerate(arr):
        if num < ((max(idx, n-idx-1)+1)*2)-1:
            ans = "NO"
            break
    
    print(ans)