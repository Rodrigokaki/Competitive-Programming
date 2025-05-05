n = 7

l = [0 for _ in range(1005)]
l[2] = 1
l[3] = 2
l[4] = 5
if n <= 3:
    print(l[n+1])

for i in range(5, n+5):
    l[i] = ((l[i-1] * 2) + l[i-3]) % ((10**9) + 7)

print(l[n+1])
