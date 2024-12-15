from typing import List

def find_minimum_moves(N: int, M: int, coordinates: List[int]) -> int:
    # Sort the coordinates in ascending order
    coordinates.sort()
    
    # Initialize the minimum number of moves to 0
    min_moves = 0
    
    # Check the distance between adjacent coordinates
    for i in range(M - 1):
        distance = abs(coordinates[i] - coordinates[i+1])
        # Add the distance to the minimum number of moves
        min_moves += distance
    
    return min_moves

# Read the inputs
N, M = map(int, input().split())
coordinates = list(map(int, input().split()))

# Call the function and print the result
print(find_minimum_moves(N, M, coordinates))