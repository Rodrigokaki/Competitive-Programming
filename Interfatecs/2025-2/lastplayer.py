n, k = list(map(int, input().split()))

arr = [i for i in range(1, n+1)]

i = 0
while len(arr) > 1:
    i = i + k  % len(arr)
    arr.remove(arr[i])

print(arr[0])