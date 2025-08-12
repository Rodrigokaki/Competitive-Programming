d_s, y_s = map(int, input().split())
d_m, y_m = map(int, input().split())

for t in range(1, 5001):
    if (t + d_s) % y_s == 0 and (t + d_m) % y_m == 0:
        print(t)
        break
else:
    print("No synchronization within 5000 minutes.")

