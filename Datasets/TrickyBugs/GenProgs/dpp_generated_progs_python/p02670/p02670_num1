import numpy as np

def count_hated_pairs(N, sequence):
    # Create a 2D array to represent the cinema seats
    seats = np.zeros((N, N), dtype=int)
    
    # Map the viewers' positions based on the given sequence
    positions = {}
    for i, viewer in enumerate(sequence):
        positions[viewer] = i + 1
    
    # Helper function to get the position (row, column) of a viewer
    def get_position(viewer):
        row = (positions[viewer] - 1) // N
        col = (positions[viewer] - 1) % N
        return row, col
    
    # Helper function to get the viewers adjacent to a given viewer
    def get_adjacent(viewer):
        row, col = get_position(viewer)
        adjacent = []
        if row > 0:
            adjacent.append(seats[row - 1][col])
        if row < N - 1:
            adjacent.append(seats[row + 1][col])
        if col > 0:
            adjacent.append(seats[row][col - 1])
        if col < N - 1:
            adjacent.append(seats[row][col + 1])
        return adjacent
    
    # Helper function to count the number of pairs of viewers
    def count_pairs():
        pairs = 0
        for viewer_x in range(1, N**2 + 1):
            for viewer_y in range(viewer_x + 1, N**2 + 1):
                position_x = get_position(viewer_x)
                position_y = get_position(viewer_y)
                if position_x[0] == position_y[0] or position_x[1] == position_y[1]:
                    continue
                if viewer_y in get_adjacent(viewer_x):
                    pairs += 1
        return pairs
    
    # Assign the viewers to their seats
    for viewer in sequence:
        row, col = get_position(viewer)
        seats[row][col] = viewer
    
    # Count the number of pairs of viewers
    pairs = count_pairs()
    
    return pairs


# Read the input values
N = int(input())
sequence = list(map(int, input().split()))

# Compute the number of pairs of viewers
pairs = count_hated_pairs(N, sequence)

# Output the result
print(pairs)