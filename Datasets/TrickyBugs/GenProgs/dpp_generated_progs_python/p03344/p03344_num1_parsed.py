from collections import deque

def find_smallest_initial_amount(N, M, vertices, edges):
    # Create an adjacency list to represent the graph
    graph = [[] for _ in range(N + 1)]
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)
    
    # Create a list to store the minimum amount of money needed for each vertex
    min_money = [float('inf')] * (N + 1)
    
    # Perform breadth-first search (BFS) starting from vertex 1
    queue = deque([(1, vertices[1][0])])
    min_money[1] = vertices[1][0]
    
    while queue:
        vertex, money = queue.popleft()
        
        for neighbor in graph[vertex]:
            if min_money[neighbor] > vertices[neighbor][0]:
                min_money[neighbor] = vertices[neighbor][0]
                queue.append((neighbor, vertices[neighbor][0]))
        
        if vertex != 1 and min_money[vertex] < money - vertices[vertex][1]:
            min_money[vertex] = money - vertices[vertex][1]
            queue.append((vertex, min_money[vertex]))
    
    # Return the minimum amount of money needed to win the game
    return min_money[N]

# Read input
N, M = map(int, input().split())
vertices = [tuple(map(int, input().split())) for _ in range(N)]
edges = [tuple(map(int, input().split())) for _ in range(M)]

# Find the smallest initial amount of money
result = find_smallest_initial_amount(N, M, vertices, edges)

# Print the result
print(result)