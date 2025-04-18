from collections import defaultdict

s = "ababcbacadefegdehijhklij"

hashmap = defaultdict(int)
inSubString = set()
subStringSizes = []

# Populating hashmap
for letter in s:
    hashmap[letter] += 1

subStringSize = 0
for letter in s:
    subStringSize += 1
    if letter not in inSubString:
        inSubString.add(letter)
    
    hashmap[letter] -= 1

    if hashmap[letter] == 0:
        inSubString.remove(letter)
    
    if len(inSubString) == 0:
        subStringSizes.append(subStringSize)
        subStringSize = 0

print(subStringSizes)