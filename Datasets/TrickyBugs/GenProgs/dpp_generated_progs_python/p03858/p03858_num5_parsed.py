# Read input from Standard Input
N, a, b = map(int, input().split())

# Read the coordinates of the pinholes
pinholes = []
for _ in range(N):
    x, y = map(int, input().split())
    pinholes.append((x, y))

# Initialize the count of pairs
count = 0

# Loop through all possible pairs of pinholes
for i in range(N):
    for j in range(i+1, N):
        # Check if the Manhattan distance between the i-th and j-th pinholes is same as the Manhattan distance between the a-th and b-th pinholes
        if abs(pinholes[i][0] - pinholes[j][0]) + abs(pinholes[i][1] - pinholes[j][1]) == abs(pinholes[a-1][0] - pinholes[b-1][0]) + abs(pinholes[a-1][1] - pinholes[b-1][1]):
            count += 1

# Print the count of pairs
print(count)