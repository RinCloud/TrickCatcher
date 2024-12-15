def find_disjoint_set(parent, i):
    if parent[i] == i:
        return i
    parent[i] = find_disjoint_set(parent, parent[i])
    return parent[i]

def union_disjoint_sets(parent, x, y):
    x_set = find_disjoint_set(parent, x)
    y_set = find_disjoint_set(parent, y)
    parent[y_set] = x_set

def is_consistent(N, M, edges):
    parent = list(range(N + 1))
    for i in range(M):
        L, R, D = edges[i]
        if find_disjoint_set(parent, L) == find_disjoint_set(parent, R):
            if D != abs(L - R):
                return False
        else:
            union_disjoint_sets(parent, L, R)
    return True

N, M = map(int, input().split())
edges = []
for _ in range(M):
    L, R, D = map(int, input().split())
    edges.append((L, R, D))

if is_consistent(N, M, edges):
    print("Yes")
else:
    print("No")