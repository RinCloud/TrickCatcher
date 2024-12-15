n, m = map(int, input().split(" "))
a = [list(map(int, input().split(" "))) for i in range(m)]

a_connects = [[] for i in range(n)]
for x, y in a:
    a_connects[x-1].append(y-1)
    a_connects[y-1].append(x-1)

a_connect_sums = [len(connect) for connect in a_connects]
bridge_count = 0
visited = [False] * n # mark all vertices as unvisited

# function to perform depth first search
def dfs(v, a_connects, visited):
    visited[v] = True # mark the vertex as visited

    for neighbor in a_connects[v]: # iterate through the neighbors of the vertex
        if not visited[neighbor]: # if the neighbor is not visited
            a_connects[v].remove(neighbor) # remove the edge from vertex v to neighbor
            a_connects[neighbor].remove(v) # remove the edge from neighbor to vertex v
            dfs(neighbor, a_connects, visited) # recursively perform dfs on the neighbor

# perform dfs on all unvisited vertices
for i in range(n):
    if not visited[i]:
        dfs(i, a_connects, visited)
        bridge_count += 1

print(bridge_count - 1)