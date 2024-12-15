X = int(input())
K = int(input())
r = list(map(int, input().split()))
Q = int(input())

# Calculate the total number of sand grains in bulb A at each time for each query
sand_grains_A = [0] * (K + 1)
for i in range(K):
    if i == 0:
        sand_grains_A[i] = r[i]
    else:
        sand_grains_A[i] = r[i] - r[i-1]
sand_grains_A[K] = X - r[K-1]

# Calculate the total number of sand grains in bulb A at each time for each query
sand_grains_B = [0] * (K + 1)
for i in range(K):
    if i == 0:
        sand_grains_B[i] = X - r[i]
    else:
        sand_grains_B[i] = r[i] - r[i-1]
sand_grains_B[K] = r[K-1]

# Process each query
for _ in range(Q):
    t, a = map(int, input().split())
    total_A = 0
    total_B = 0
    for i in range(K + 1):
        if t < r[i]:
            total_A += sand_grains_A[i]
            total_B += sand_grains_B[i]
        else:
            total_A += sand_grains_B[i]
            total_B += sand_grains_A[i]
    total_A -= a
    print(total_A)