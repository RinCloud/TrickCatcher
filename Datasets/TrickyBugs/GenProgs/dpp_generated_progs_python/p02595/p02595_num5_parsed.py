import math

# Read input values
N, D = map(int, input().split())

# Initialize counter for points within distance D from origin
count = 0

# Loop through the N points
for _ in range(N):
    X, Y = map(int, input().split())
    
    # Calculate distance from origin using Euclidean distance formula
    distance = math.sqrt(X**2 + Y**2)
    
    # Check if distance is less than or equal to D
    if distance <= D:
        count += 1

# Print the count
print(count)