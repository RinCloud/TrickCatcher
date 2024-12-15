import math

# Read N and D
N, D = map(int, input().split())

count = 0

# Iterate through each point
for _ in range(N):
    # Read the coordinates of the point
    X, Y = map(int, input().split())
    
    # Calculate the distance from the origin
    distance = math.sqrt(X**2 + Y**2)
    
    # Check if the distance is at most D
    if distance <= D:
        count += 1

# Print the number of points such that the distance from the origin is at most D
print(count)