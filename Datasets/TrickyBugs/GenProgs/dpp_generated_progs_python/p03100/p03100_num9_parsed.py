class Graph:
    def __init__(self, n):
        self.num_vertices = n
        self.edges = [[] for _ in range(n + 1)]

    def add_edge(self, u, v, length):
        self.edges[u].append((v, length))
        self.edges[v].append((u, length))

    def dfs(self, u, target, length, path_length, visited):
        visited[u] = True
        
        if u == target and path_length % mod == length:
            return True
            
        for v, edge_length in self.edges[u]:
            new_path_length = (path_length + (1 << edge_length)) % mod
            
            if not visited[v]:
                if self.dfs(v, target, length, new_path_length, visited):
                    return True
        
        visited[u] = False
        return False

    def exists_path(self, source, target, length):
        visited = [False] * (self.num_vertices + 1)
        path_length = 0
        return self.dfs(source, target, length, path_length, visited)


def solve():
    # Read input
    N, M, Q, mod = map(int, input().split())
    graph = Graph(N)
    
    for _ in range(M):
        A, B, C = map(int, input().split())
        graph.add_edge(A, B, C)

    for _ in range(Q):
        S, T, R = map(int, input().split())

        if graph.exists_path(S, T, R):
            print("YES")
        else:
            print("NO")


# Call solve function
solve()
