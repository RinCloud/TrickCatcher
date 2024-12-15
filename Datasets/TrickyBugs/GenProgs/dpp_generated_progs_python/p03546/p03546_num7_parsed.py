# Reading the input
H, W = map(int, input().split())
C = []
for _ in range(10):
    C.append(list(map(int, input().split())))
A = []
for _ in range(H):
    A.append(list(map(int, input().split())))

# Applying Floyd-Warshall algorithm to find the minimum cost
for k in range(10):
    for i in range(10):
        for j in range(10):
            C[i][j] = min(C[i][j], C[i][k] + C[k][j])

# Calculating the total minimum cost
total_cost = 0
for row in A:
    for num in row:
        if num >= 0:
            total_cost += C[num][1]

# Printing the output
print(total_cost)