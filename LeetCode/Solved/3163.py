from collections import defaultdict

word = "abcde"

comp = ""
word += "*"
dic = defaultdict(int)
dic[word[0]] += 1
for letterIndex in range(1,len(word)):
    letter = word[letterIndex]
    if letter != word[letterIndex-1] or dic[letter] == 9:
        comp += f"{dic[word[letterIndex-1]]}{word[letterIndex-1]}"
        dic[word[letterIndex-1]] = 0
    dic[letter] += 1

print(comp)