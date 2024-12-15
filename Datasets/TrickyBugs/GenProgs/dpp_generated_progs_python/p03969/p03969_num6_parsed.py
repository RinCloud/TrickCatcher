"""
MOD = 10**9 + 7

class UnionFind:
    def __init__(self, n):
        self.parent = list(range(n))
        self.rank = [0] * n
        
    def find(self, i):
        if self.parent[i] != i:
            self.parent[i] = self.find(self.parent[i])
        return self.parent[i]
    
    def union(self, i, j):
        x = self.find(i)
        y = self.find(j)
        
        if x == y:
            return
        
        if self.rank[x] < self.rank[y]:
            self.parent[x] = y
        else:
            self.parent[y] = x
            if self.rank[x] == self.rank[y]:
                self.rank[x] += 1            

def main():
    N, M, K = map(int, input().split())
    edges = []
    
    for _ in range(M):
        a, b = map(int, input().split())
        edges.append((a-1, b-1))
    
    uf = UnionFind(N)
    color = [1] * N
    
    for a, b in edges:
        if uf.find(a) != uf.find(b):
            uf.union(a, b)
        else:
            color[a] += 1
            color[b] += 1
    
    ans = pow(K, uf.parent.count(-1), MOD)
    
    for c in color:
        ans = ans * pow(K-1, c-1, MOD) % MOD
    
    print(ans)

if __name__ == '__main__':
    main()
"""