import itertools
from collections import Counter

N, X, Y = map(int, input().split())
balls = [tuple(map(int, input().split())) for _ in range(N)]

# Count the number of balls with each color
color_counts = Counter(c for c, _ in balls)

# Initialize a list to store the possible sequences of colors
sequences = [[]]

# Iterate through each color
for color, count in color_counts.items():
    # Get the possible positions of the balls of this color
    positions = [i for i, (c, _) in enumerate(balls) if c == color]
    # Get the weights of all the balls of this color
    weights = [w for c, w in balls if c == color]

    # Update the sequences by appending the current color to each existing sequence
    sequences = [seq + [color] for seq in sequences]

    # Get all possible pairs of positions for operation 1
    pairs_op1 = list(itertools.combinations(positions, 2))

    # Iterate through each pair of positions for operation 1
    for i, j in pairs_op1:
        # Get the total weight of the balls in this pair
        total_weight = weights[i] + weights[j]
        # Check if the total weight is at most X
        if total_weight <= X:
            # For each existing sequence, swap the positions of the balls at i and j
            for seq in sequences:
                seq[i], seq[j] = seq[j], seq[i]
    
    # Get all possible pairs of positions for operation 2
    pairs_op2 = list(itertools.combinations(positions, 2))

    # Iterate through each pair of positions for operation 2
    for i, j in pairs_op2:
        # Get the total weight of the balls in this pair
        total_weight = weights[i] + weights[j]
        # Check if the total weight is at most Y
        if total_weight <= Y:
            # For each existing sequence, swap the positions of the balls at i and j
            for seq in sequences:
                seq[i], seq[j] = seq[j], seq[i]

# Output the number of different sequences of colors
print(len(set(tuple(seq) for seq in sequences)) % (10**9 + 7))