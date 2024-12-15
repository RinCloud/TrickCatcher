from itertools import permutations

# Read input
H, W = map(int, input().split())
c = [list(map(int, input().split())) for _ in range(10)]
A = [list(map(int, input().split())) for _ in range(H)]

# Calculate the minimum distance between each pair of digits using Floyd-Warshall algorithm
for k in range(10):
    for i in range(10):
        for j in range(10):
            c[i][j] = min(c[i][j], c[i][k] + c[k][j])

# Initialize the total cost
total_cost = 0

# Calculate the total cost by iterating through each square on the wall
for i in range(H):
    for j in range(W):
        if A[i][j] != -1:
            total_cost += c[A[i][j]][1]

# Print the total cost
print(total_cost)