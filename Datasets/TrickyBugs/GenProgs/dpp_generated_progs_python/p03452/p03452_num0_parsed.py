'''
Since the range of the coordinate x_i is quite large (0 to 10^9), we can use a disjoint set data structure to solve this problem efficiently. 

We will initialize an array "parent" of size N+1 (1-indexed) to keep track of the parent of each person. Initially, each person is its own parent.

For each piece of information (L_i, R_i, D_i):
- Find the parent of L_i and R_i.
- If the parent of L_i is equal to the parent of R_i, it means they are already in the same set. Check if the difference between their coordinates is equal to D_i. If not, print "No" and exit.
- Otherwise, combine the sets by setting the parent of one of them as the parent of the other, and adjust their coordinates accordingly.

After processing all the information, check if the difference between the coordinates of any two people is equal to the required distance mentioned in the information. If any difference is not equal, print "No". Otherwise, print "Yes".
'''

class DisjointSet:
    def __init__(self, n):
        self.parent = list(range(n + 1))
        self.rank = [0] * (n + 1)

    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]

    def union(self, x, y):
        x_parent = self.find(x)
        y_parent = self.find(y)
        if x_parent == y_parent:
            return
        if self.rank[x_parent] < self.rank[y_parent]:
            self.parent[x_parent] = y_parent
        elif self.rank[x_parent] > self.rank[y_parent]:
            self.parent[y_parent] = x_parent
        else:
            self.parent[y_parent] = x_parent
            self.rank[x_parent] += 1

def main():
    n, m = map(int, input().split())
    disjoint_set = DisjointSet(n)
    coordinates = [0] * (n + 1)

    for _ in range(m):
        l, r, d = map(int, input().split())
        l_parent = disjoint_set.find(l)
        r_parent = disjoint_set.find(r)

        if l_parent == r_parent:
            if abs(coordinates[l] - coordinates[r]) != d:
                print("No")
                return
        else:
            disjoint_set.union(l, r)
            coordinates[disjoint_set.find(r)] = coordinates[l] + d

    print("Yes")

if __name__ == "__main__":
    main()