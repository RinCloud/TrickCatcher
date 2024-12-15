import sys
sys.setrecursionlimit(100000)

N, M = map(int, input().split())

parent = [i for i in range(N+1)]
rank = [0]*(N+1)
x = [0]*(N+1)

def find(x):
    if parent[x] == x:
        return x
    else:
        parent[x] = find(parent[x])
        return parent[x]

def unite(x, y, d):
    x = find(x)
    y = find(y)
    if x == y:
        return
    if rank[x] < rank[y]:
        parent[x] = y
        x = x + x*d
    else:
        parent[y] = x
        x = y + y*d
        if rank[x] == rank[y]:
            rank[x] += 1

def same(x, y):
    return find(x) == find(y)

for _ in range(M):
    L, R, D = map(int, input().split())
    if same(L, R):
        if x[R] - x[L] != D:
            print("No")
            exit(0)
    else:
        unite(L, R, D)

print("Yes")