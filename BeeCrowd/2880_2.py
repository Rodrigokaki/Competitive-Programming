from collections import defaultdict

message = input()
crib = input()

nMessage = len(message)
nCrib = len(crib)

ans = nMessage - nCrib + 1

hashtable = defaultdict(list)
seen = set()

for i in range(nMessage):
    hashtable[ord(message[i])].append(i)

for i in range(nCrib):
    letter = crib[i]
    for j in range(len(hashtable[ord(letter)])):
        position = hashtable[ord(letter)][j]
        if position > nMessage - nCrib + i or position-i < 0:
            continue
        elif position-i not in seen:
            ans -= 1
            seen.add(position-i)

print(ans)