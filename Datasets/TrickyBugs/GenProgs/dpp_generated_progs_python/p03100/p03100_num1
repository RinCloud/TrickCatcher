'''

# Function to find the root of the vertex
def find_root(parent, vertex):
    if parent[vertex] == vertex:
        return vertex
    parent[vertex] = find_root(parent, parent[vertex])
    return parent[vertex]

# Function to perform union operation
def union(parent, rank, vertex1, vertex2):
    root1 = find_root(parent, vertex1)
    root2 = find_root(parent, vertex2)
    if rank[root1] < rank[root2]:
        parent[root1] = root2
    elif rank[root1] > rank[root2]:
        parent[root2] = root1
    else:
        parent[root2] = root1
        rank[root1] += 1

# Function to check if a path exists with length R modulo MOD
def check_path(edges, S, T, R, MOD):
    parent = list(range(len(edges) + 1))
    rank = [0] * (len(edges) + 1)
    for edge in edges:
        if edge[0] != T and edge[1] != T:
            union(parent, rank, edge[0], edge[1])
    if find_root(parent, S) == find_root(parent, T):
        if R == 0 or R % 2 == 1:
            return 'YES'
        else:
            remainders = []
            for i in range(len(edges)):
                if edges[i][0] == T or edges[i][1] == T:
                    remainders.append(edges[i][2])
            remainders.sort()
            for i in range(len(remainders)):
                if (R + remainders[i]) % 2 == 1:
                    return 'YES'
            return 'NO'
    else:
        return 'NO'


# Read inputs
N, M, Q, MOD = map(int, input().split())
edges = []
for _ in range(M):
    A, B, C = map(int, input().split())
    edges.append((A, B, C))

# Process queries
for _ in range(Q):
    S, T, R = map(int, input().split())
    print(check_path(edges, S, T, R % MOD, MOD))

'''