from collections import defaultdict

class UnionFind:
    def __init__(self, n):
        self.parent = list(range(n))
        self.rank = [0] * n

    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]

    def union(self, x, y):
        x_root = self.find(x)
        y_root = self.find(y)

        if x_root == y_root:
            return

        if self.rank[x_root] < self.rank[y_root]:
            self.parent[x_root] = y_root
        elif self.rank[x_root] > self.rank[y_root]:
            self.parent[y_root] = x_root
        else:
            self.parent[y_root] = x_root
            self.rank[x_root] += 1

def collect_balls(N, balls):
    mod = 10**9 + 7
    
    uf = UnionFind(2*N)
    for i in range(2*N):
        uf.union(i, balls[i][0]-1)
    
    group_sizes = defaultdict(int)
    for i in range(2*N):
        group_sizes[uf.find(i)] += 1

    ans = 1
    for size in group_sizes.values():
        ans = ans * size % mod

    return ans

# Read input
N = int(input())
balls = []
for _ in range(2*N):
    x, y = map(int, input().split())
    balls.append((x, y))

# Calculate and print the answer
print(collect_balls(N, balls))