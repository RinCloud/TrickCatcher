# Read input
N, a, b = map(int, input().split())

# Read coordinates of pinholes
pinholes = [list(map(int, input().split())) for _ in range(N)]

# Initialize count of pairs
count = 0

# Loop through each pair of pinholes
for i in range(N):
    for j in range(i + 1, N):
        xi, yi = pinholes[i]
        xj, yj = pinholes[j]
        
        # Calculate Manhattan distance between the two pinholes
        distance = abs(xi - xj) + abs(yi - yj)
        
        # Check if the compass can point to these pinholes
        if distance % 2 == 0 and (distance // 2) % 2 == 0:
            count += 1

# Print the count of pairs
print(count)