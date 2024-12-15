def min_moves(N, M, coordinates):
    # Sort the coordinates
    coordinates.sort()
    
    # Calculate the distance between consecutive coordinates
    distances = [coordinates[i] - coordinates[i-1] for i in range(1, M)]
    
    # Compute the total number of moves required
    total_moves = sum(distances)
    
    return total_moves

# Read the input from standard input
N, M = map(int, input().split())
coordinates = list(map(int, input().split()))

# Call the min_moves function and print the result
result = min_moves(N, M, coordinates)
print(result)