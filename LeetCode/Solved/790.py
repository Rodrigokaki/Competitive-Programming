n = 7

l = [0 for _ in range(1003)]
l[0] = 1
l[1] = 2
l[2] = 5
if n <= 3:
    print(l[n-1])

for i in range(3, n+3):
    l[i] = ((l[i-1] * 2) + l[i-3]) % ((10**9) + 7)

print(l[n-1])
