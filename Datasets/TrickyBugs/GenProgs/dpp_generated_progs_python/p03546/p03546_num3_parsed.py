import sys

input = sys.stdin.readline

H, W = map(int, input().split())

C = []
for _ in range(10):
    C.append(list(map(int, input().split())))

A = []
for _ in range(H):
    A.append(list(map(int, input().split())))

# Floyd-Warshall algorithm to find the minimum cost to change each digit to 1
for k in range(10):
    for i in range(10):
        for j in range(10):
            C[i][j] = min(C[i][j], C[i][k] + C[k][j])

# Calculate the total minimum cost for all digits on the wall
total_cost = 0
for i in range(H):
    for j in range(W):
        if A[i][j] != -1:
            total_cost += C[A[i][j]][1]

print(total_cost)