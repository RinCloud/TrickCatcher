class DSU:
    def __init__(self, n):
        self.parent = list(range(n))
        self.rank = [0] * n

    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]

    def union(self, x, y):
        x = self.find(x)
        y = self.find(y)
        if x != y:
            if self.rank[x] < self.rank[y]:
                x, y = y, x
            self.parent[y] = x
            if self.rank[x] == self.rank[y]:
                self.rank[x] += 1


MOD = 10 ** 9 + 7
N = int(input())
balls = [list(map(int, input().split())) for _ in range(2 * N)]
sorted_by_x = sorted(enumerate(balls), key=lambda x: x[1][0])
sorted_by_y = sorted(enumerate(balls), key=lambda x: x[1][1])

dsu = DSU(2 * N)
for i in range(2 * N - 1):
    if (
        sorted_by_x[i][1][0] == sorted_by_x[i + 1][1][0]
        and sorted_by_x[i][1][1] < sorted_by_x[i + 1][1][1]
    ):
        dsu.union(sorted_by_x[i][0], sorted_by_x[i + 1][0])

for i in range(2 * N - 1):
    if (
        sorted_by_y[i][1][1] == sorted_by_y[i + 1][1][1]
        and sorted_by_y[i][1][0] < sorted_by_y[i + 1][1][0]
    ):
        dsu.union(sorted_by_y[i][0], sorted_by_y[i + 1][0])

fact = [1] * (2 * N + 1)
for i in range(2 * N):
    fact[i + 1] = (fact[i] * (i + 1)) % MOD

answer = 1
for i in range(2 * N):
    if dsu.find(i) == i:
        answer = (answer * fact[dsu.rank[i]]) % MOD

print(answer)