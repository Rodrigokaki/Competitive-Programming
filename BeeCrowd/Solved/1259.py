t = int(input())

oddNumberList = []
evenNumberList = []
for _ in range(t):
    num = int(input())

    if num % 2 == 0:
        evenNumberList.append(num)
    else:
        oddNumberList.append(num)

oddNumberList = sorted(oddNumberList, reverse=True)
evenNumberList = sorted(evenNumberList)

for number in evenNumberList:
    print(number)

for number in oddNumberList:
    print(number)
