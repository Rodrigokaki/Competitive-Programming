questions = [[3,2],[4,3],[4,4],[2,5]]

n = len(questions)
memo = [None for _ in range(n)]
def f(i):
    if i >= n:
        return 0
    
    if memo[i] is not None:
        return memo[i]

    
    iIncluded = f(i + questions[i][1] + 1) + questions[i][0]
    iExcluded = f(i+1)
    ans = max(iIncluded, iExcluded)

    memo[i] = ans
    return ans

print(f(0))