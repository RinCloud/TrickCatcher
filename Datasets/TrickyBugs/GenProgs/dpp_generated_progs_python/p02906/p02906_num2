# Program

def is_valid_graph(n, m, q, clues):
    graph = [[] for _ in range(n)]
    for i in range(m):
        a, b = clues[i][0], clues[i][1]
        graph[a].append(b)
        graph[b].append(a)
    
    for i in range(q):
        a, b, c = clues[m+i]
        if c == 0:
            visited = [False] * n
            if not dfs(graph, a, b, visited):
                return "No"
        else:
            if len(graph[a]) < 2 or len(graph[b]) < 2:
                return "No"
    
    return "Yes"

def dfs(graph, source, target, visited):
    visited[source] = True
    if source == target:
        return True
    
    for neighbor in graph[source]:
        if not visited[neighbor]:
            if dfs(graph, neighbor, target, visited):
                return True
    
    return False

# Get inputs
n, m, q = map(int, input().split())
clues = []
for _ in range(m + q):
    a, b, c = map(int, input().split())
    clues.append((a, b, c))

# Run the program
result = is_valid_graph(n, m, q, clues)

# Print the result
print(result)