import math

redSize = int(input(), 16)
greenSize = int(input(), 16)
blueSize = int(input(), 16)

greenAmount = (redSize // greenSize)**2

blueAmount = (greenSize // blueSize)**2

blueAmount *= greenAmount

ans = hex(1+greenAmount+blueAmount)[2:]

print(ans)