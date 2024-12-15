from collections import defaultdict

# read input
H, W = map(int, input().split())
c = [list(map(int, input().split())) for _ in range(10)]
A = [list(map(int, input().split())) for _ in range(H)]

# use Floyd Warshall algorithm to find minimum cost from digit i to digit j
for k in range(10):
    for i in range(10):
        for j in range(10):
            c[i][j] = min(c[i][j], c[i][k] + c[k][j])

# calculate the total minimum cost to turn all digits into 1
total_cost = 0
for i in range(H):
    for j in range(W):
        if A[i][j] != -1:
            total_cost += c[A[i][j]][1]

# output the result
print(total_cost)