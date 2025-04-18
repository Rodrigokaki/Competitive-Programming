motherAge = int(input())
age1 = int(input())
age2 = int(input())
age3 = motherAge - age1 - age2

ans = max(age1, age2, age3)

print(ans)