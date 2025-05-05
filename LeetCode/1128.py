dominoes = [[1,2],[1,2],[1,1],[1,2],[2,2]]

ans = 0
seen = set()
for i in range(len(dominoes)):
    if i in seen:
        continue
    count = 1
    for j in range(i+1, len(dominoes)):
        if dominoes[i] == dominoes[j] or (dominoes[i][1] == dominoes[j][0] and dominoes[i][0] == dominoes[j][1]):
            count += 1
            ans += count - 1
            seen.add(j)

print(ans)
