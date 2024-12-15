def main():
    N, M = map(int, input().split())
    
    parent = list(range(N+1))
    rank = [0] * (N+1)
    
    def find(x):
        if parent[x] != x:
            parent[x] = find(parent[x])
        return parent[x]
    
    def union(x, y):
        x_root, y_root = find(x), find(y)
        if rank[x_root] < rank[y_root]:
            parent[x_root] = y_root
        else:
            parent[y_root] = x_root
            if rank[x_root] == rank[y_root]:
                rank[x_root] += 1
    
    for _ in range(M):
        L, R, D = map(int, input().split())
        if find(L) == find(R):
            if (find(R) - find(L)) != D:
                print("No")
                return
        else:
            union(L, R)
    
    print("Yes")
    
main()