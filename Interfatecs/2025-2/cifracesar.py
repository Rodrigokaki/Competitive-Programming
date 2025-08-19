def moveBack(word, amount):
    temp = ''
    for letter in word:
        if (ord(letter)-amount) < ord('A'):
            temp += chr(ord(letter)-amount+26)
        else:
            temp += chr(ord(letter)-amount)
    return temp

while True:
    msg = input()

    if msg == '***':
        break

    for i in range(1, 27):
        if moveBack(msg[-3:], i) == 'AVE' or moveBack(msg[-4:], i) == 'SPQR':
            number = i
            break
    
    ans = ''
    for idx in range(len(msg)):
        if ord(msg[idx]) >= ord('A') and ord(msg[idx]) <= ord('Z'):
            ans += moveBack(msg[idx], number)
            continue
        ans += msg[idx]
    
    print(ans)

