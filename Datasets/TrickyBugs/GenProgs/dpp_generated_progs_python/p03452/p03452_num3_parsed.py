# This problem can be solved using Union-Find or Disjoint Set Union (DSU) data structure.
# We can create a DSU object with N elements representing each person in the beginning.
# Initially, every person is in their own set, so the rank of each set is 1.
# Now, we can iterate through the given M pieces of information and perform union operation to merge sets.
# While performing each union operation, if the sets of L_i and R_i are already in the same set,
# we can check if their distance D_i is consistent with the distance of their representative elements.
# If the distances are not consistent, it means the information is incorrect, and we can return "No".
# After processing all the information, we can return "Yes" as the output.

class DSU:
    def __init__(self, n):
        self.parent = [i for i in range(n + 1)]
        self.rank = [1] * (n + 1)

    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]

    def union(self, x, y, d):
        px, py = self.find(x), self.find(y)
        if px == py:
            if self.distance(x) - self.distance(y) != d:
                return False
            return True

        if self.rank[px] > self.rank[py]:
            px, py = py, px
            d = -d

        self.parent[px] = py
        self.rank[py] += self.rank[px]
        self.rank[px] = 0
        self.update_distance(x, y, d)

        return True

    def distance(self, x):
        return self.rank[x] - 1

    def update_distance(self, x, y, d):
        self.rank[x] = self.rank[y] + 1 - d

N, M = map(int, input().split())
dsu = DSU(N)

for _ in range(M):
    L, R, D = map(int, input().split())
    if not dsu.union(L, R, D):
        print("No")
        break
else:
    print("Yes")