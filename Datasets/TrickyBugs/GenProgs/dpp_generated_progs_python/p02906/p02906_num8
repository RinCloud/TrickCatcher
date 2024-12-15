from collections import defaultdict

class UnionFind:
    def __init__(self, n):
        self.parent = [i for i in range(n)]
        self.rank = [0] * n
    
    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]
    
    def union(self, x, y):
        rootX = self.find(x)
        rootY = self.find(y)
        
        if rootX == rootY:
            return
        
        if self.rank[rootX] < self.rank[rootY]:
            self.parent[rootX] = rootY
        elif self.rank[rootX] > self.rank[rootY]:
            self.parent[rootY] = rootX
        else:
            self.parent[rootX] = rootY
            self.rank[rootY] += 1

def solve():
    n, m, q = map(int, input().split())
    
    uf = UnionFind(n)
    
    for _ in range(m):
        a, b, _ = map(int, input().split())
        uf.union(a, b)
    
    clues = []
    for _ in range(q):
        a, b, c = map(int, input().split())
        clues.append((a, b, c))
    
    connected_components = defaultdict(set)
    for i in range(n):
        connected_components[uf.find(i)].add(i)
    
    for a, b, c in clues:
        if uf.find(a) != uf.find(b):
            print("No")
            return
    
    for component in connected_components.values():
        for a, b, c in clues:
            if a in component and b in component and c == 0:
                print("No")
                return
    
    print("Yes")

if __name__ == "__main__":
    solve()