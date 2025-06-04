word = "aann"
numFriends = 2

if numFriends == 1:
    print(word)

windowSize = len(word)-numFriends
ans = ""

for i in range(len(word)):
    if i+windowSize < len(word):
        maxWindowSize = windowSize+1
    else:
        maxWindowSize = len(word)
    ans = word[i:i+maxWindowSize] if word[i:i+maxWindowSize] > ans else ans

print(ans)