length, n = map(int, input().split())

base = length - (n - 1)

ans = (base*base) + n-1

print(ans)