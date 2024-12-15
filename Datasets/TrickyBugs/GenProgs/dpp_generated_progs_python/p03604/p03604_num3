# Program

from collections import defaultdict

MOD = 10**9 + 7

class UnionFind:
    def __init__(self, n):
        self.parent = [-1] * n
        self.size = [1] * n
    
    def find(self, x):
        if self.parent[x] == -1:
            return x
        else:
            self.parent[x] = self.find(self.parent[x])
            return self.parent[x]
    
    def unite(self, x, y):
        x = self.find(x)
        y = self.find(y)
        
        if x == y:
            return False
        
        if self.size[x] < self.size[y]:
            x, y = y, x
        
        self.parent[y] = x
        self.size[x] += self.size[y]
        
        return True

def solve(N, balls):
    uf = UnionFind(2 * N)
    rows = defaultdict(list)
    cols = defaultdict(list)

    for idx, (x, y) in enumerate(balls):
        rows[y].append(idx)
        cols[x].append(idx)

    for row in rows.values():
        for i in range(1, len(row)):
            uf.unite(row[0], row[i])

    for col in cols.values():
        for i in range(1, len(col)):
            uf.unite(col[0], col[i])

    res = 1
    for i in range(2 * N):
        if uf.parent[i] == -1:
            res *= uf.size[i]
            res %= MOD
    
    return res

# Main
N = int(input())
balls = [tuple(map(int, input().split())) for _ in range(2*N)]

ans = solve(N, balls)
print(ans)