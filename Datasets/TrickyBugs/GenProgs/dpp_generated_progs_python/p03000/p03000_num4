# Read input
N, X = map(int, input().split())
L = list(map(int, input().split()))

# Initialize variables
position = 0
bounces = 0

# Calculate number of bounces where coordinate is at most X
for i in range(N):
    position += L[i]
    if position <= X:
        bounces += 1

# Print output
print(bounces)