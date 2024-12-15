from collections import deque

def bfs(adj, start):
    visited = [False] * len(adj)
    queue = deque([start])
    visited[start] = True

    while queue:
        node = queue.popleft()
        for neighbor in adj[node]:
            if not visited[neighbor]:
                queue.append(neighbor)
                visited[neighbor] = True
    
    return visited

def find_connected_components(adj):
    components = []
    visited = [False] * len(adj)
    for node in range(len(adj)):
        if not visited[node]:
            component = bfs(adj, node)
            components.append(component)
            visited = [visited[i] or component[i] for i in range(len(adj))]
    
    return components

def find_lexicographically_smallest(A, B, adj):
    components = find_connected_components(adj)
    num_components = len(components)
    # Find the number of vertices and edges in each component
    vertex_counts = [sum(component) for component in components]
    edge_counts = [sum((vertex_counts[i] * (vertex_counts[i] - 1)) // 2 for i in range(num_components))]
    num_vertices = sum(vertex_counts) - (num_components - 1)
    num_edges = sum(edge_counts) - (num_components - 1)

    while num_vertices > 1:
        if num_vertices - num_edges >= 2 * B:
            A += 1
            num_vertices -= num_edges
            num_edges = A
        else:
            B += 1
            num_vertices = 1
            for i in range(num_components):
                num_edges += vertex_counts[i] * min(B, vertex_counts[i] - 1) // 2

    return A, B

def main():
    N = int(input())
    adj = [[] for _ in range(N)]
    for _ in range(N - 1):
        a, b = map(int, input().split())
        adj[a - 1].append(b - 1)
        adj[b - 1].append(a - 1)

    A, B = find_lexicographically_smallest(1, 1, adj)
    print(A, B)

if __name__ == "__main__":
    main()