grid = [[5,2,1],[1,1,2]]
queries = [3]

ans = [0 for _ in range(len(queries))]
for i in range(len(queries)):
    gridCopy = [row[:] for row in grid]
    queue = []
    queue.append([0,0])
    if gridCopy[0][0] < queries[i]:
        gridCopy[0][0] = 0
        ans[i] += 1
    else:
        continue

    while queue:
        curX, curY = queue.pop()

        if curX > 0:
            if gridCopy[curX-1][curY] != 0 and gridCopy[curX-1][curY] < queries[i]:
                queue.append([curX-1, curY])
                ans[i] += 1
                gridCopy[curX-1][curY] = 0
        
        if curX < len(grid)-1:
            if gridCopy[curX+1][curY] != 0 and gridCopy[curX+1][curY] < queries[i]:
                queue.append([curX+1, curY])
                ans[i] += 1
                gridCopy[curX+1][curY] = 0

        if curY > 0:
            if gridCopy[curX][curY-1] != 0 and gridCopy[curX][curY-1] < queries[i]:
                queue.append([curX, curY-1])
                ans[i] += 1
                gridCopy[curX][curY-1] = 0
        
        if curY < len(grid[0])-1:
            if gridCopy[curX][curY+1] != 0 and gridCopy[curX][curY+1] < queries[i]:
                queue.append([curX, curY+1])
                ans[i] += 1
                gridCopy[curX][curY+1] = 0

print(ans)