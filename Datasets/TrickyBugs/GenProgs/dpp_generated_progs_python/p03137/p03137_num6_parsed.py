from collections import defaultdict

def calculate_min_moves(N, M, X):
    # Create a dictionary to keep track of the number of pieces at each integer coordinate
    num_pieces = defaultdict(int)
    
    # Add the initial coordinates of the pieces to the dictionary
    for x in X:
        num_pieces[x] += 1

    # Initialize the minimum number of moves as the sum of the absolute differences between each coordinate
    min_moves = sum(abs(x) for x in X)

    # Iterate over all possible next coordinates
    for next_coord in range(min(X)-1, max(X)+2):
        moves = 0
        
        # Calculate the number of moves required to visit all the coordinates
        for coord, count in num_pieces.items():
            moves += abs(coord - next_coord) * count

        # Update the minimum number of moves if necessary
        min_moves = min(min_moves, moves)
    
    return min_moves

# Read input values
N, M = map(int, input().split())
X = list(map(int, input().split()))

# Calculate and print the minimum number of moves required
print(calculate_min_moves(N, M, X))