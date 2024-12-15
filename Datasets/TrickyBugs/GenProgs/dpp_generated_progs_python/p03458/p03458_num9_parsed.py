N, K = [int(x) for x in input().split()]
desires = []

for _ in range(N):
    x, y, c = input().split()
    desires.append((int(x), int(y), c))

# Count the number of desires of the same color in each possible K x K square
black_count = [[0] * (K+1) for _ in range(K+1)]
white_count = [[0] * (K+1) for _ in range(K+1)]

for x, y, c in desires:
    if c == 'B':
        black_count[x % (2 * K)][y % (2 * K)] += 1
    else:
        white_count[x % (2 * K)][y % (2 * K)] += 1

# Calculate the number of desires that can be satisfied
max_satisfied = 0

for i in range(K):
    for j in range(K):
        # Add the count of the current K x K square
        square_satisfied = black_count[i][j] + white_count[i][j]
        # Add the count of the squares in the same row and column
        square_satisfied += black_count[i+K][j] + white_count[i+K][j]
        square_satisfied += black_count[i][j+K] + white_count[i][j+K]
        # Subtract the count of the corner square since it was counted twice
        square_satisfied -= black_count[i+K][j+K] + white_count[i+K][j+K]

        max_satisfied = max(max_satisfied, square_satisfied)

print(max_satisfied)