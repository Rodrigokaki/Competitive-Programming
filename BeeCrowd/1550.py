from collections import deque

n = int(input())

def inverter(num):
    num = str(num)
    inverted = ""
    for i in range(len(num)-1, -1, -1):
        inverted += num[i]
    return int(inverted)

for _ in range(n):
    num, target = map(int, input().split())

    seen = set()
    queue = deque()
    queue.append(num)
    seen.add(num)
    amount = 1
    ans = 0
    while(queue):
        amount -= 1
        node = queue.popleft()
        if node == target: 
            break
        else:
            invertido = inverter(node)

            if (node+1) not in seen:
                queue.append(node+1)
                seen.add(node+1)

            if invertido not in seen:
                queue.append(invertido)
                seen.add(invertido)

            if amount == 0:
                ans += 1
                amount = len(queue)

    print(ans)