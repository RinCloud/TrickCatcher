from collections import defaultdict

def dfs(graph, u, visited, parent, low, disc, is_bridge):
    visited[u] = True
    disc[u] = dfs.time
    low[u] = dfs.time
    dfs.time += 1

    for v in graph[u]:
        if not visited[v]:
            parent[v] = u
            dfs(graph, v, visited, parent, low, disc, is_bridge)

            low[u] = min(low[u], low[v])

            if low[v] > disc[u]:
                is_bridge[(min(u, v), max(u, v))] = True

        elif v != parent[u]:
            low[u] = min(low[u], disc[v])

def count_bridges(graph):
    num_vertices = len(graph)
    visited = [False] * num_vertices
    parent = [-1] * num_vertices
    low = [float('inf')] * num_vertices
    disc = [float('inf')] * num_vertices
    is_bridge = defaultdict(bool)

    dfs.time = 0
    for u in range(num_vertices):
        if not visited[u]:
            dfs(graph, u, visited, parent, low, disc, is_bridge)

    return sum(is_bridge.values())

def main():
    n, m = map(int, input().split())
    graph = defaultdict(list)
    for _ in range(m):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)
    num_bridges = count_bridges(graph)
    print(num_bridges)

if __name__ == "__main__":
    main()