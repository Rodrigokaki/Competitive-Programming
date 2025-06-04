    ans = max(ans, colorsDict[colors[cur]])
    for edge in graph[cur]:
        queue.append(edge)

print(ans)    