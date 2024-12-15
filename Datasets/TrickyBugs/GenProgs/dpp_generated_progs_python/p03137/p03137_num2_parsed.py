import math

def min_moves(N, M, coordinates):
    coordinates.sort()
    distances = []
    
    for i in range(M-1):
        distances.append(coordinates[i+1] - coordinates[i])
    
    return sum(distances) - max(distances)

# Read input
N, M = map(int, input().split())
coordinates = list(map(int, input().split()))

# Calculate minimum number of moves
result = min_moves(N, M, coordinates)

# Print output
print(result)