def countNumbers(numbers):
    temp = ''
    i = 0
    while i < len(numbers):
        cur = numbers[i]
        count = 0
        while i < len(numbers) and numbers[i] == cur:
            count += 1
            i += 1
        temp += f'{count}{cur}'
    return temp

times = int(input())

ans = '1'
for _ in range(times-1):
    ans = countNumbers(ans)

print(ans)