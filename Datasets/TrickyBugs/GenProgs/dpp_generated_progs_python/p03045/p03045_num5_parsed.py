def minimum_cost(N, M, connections):
    cards = [0] * N
    visited = [False] * N
    cost = 0
    
    def dfs(node):
        nonlocal cost
        visited[node] = True
        for connection in connections[node]:
            if visited[connection] == False:
                visited[connection] = True
                cards[connection] = 1 - cards[node]
                cost += 1
                dfs(connection)
            elif cards[connection] == cards[node]:
                cards[connection] = 1 - cards[node]
                cost += 1
    
    for i in range(N):
        if visited[i] == False:
            dfs(i)

    return cost

N, M = map(int, input().split())
connections = [[] for _ in range(N)]

for _ in range(M):
    X, Y, Z = map(int, input().split())
    connections[X-1].append(Y-1)
    connections[Y-1].append(X-1)

result = minimum_cost(N, M, connections)
print(result)
