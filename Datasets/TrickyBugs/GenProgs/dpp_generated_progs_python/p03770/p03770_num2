from collections import defaultdict

def count_sequences(N, X, Y, balls):
    MOD = 10**9 + 7

    # Initialize dictionaries to count occurrences of colors and weights
    color_count = defaultdict(int)
    weight_count = defaultdict(int)

    # Iterate through the balls and update the dictionaries
    for color, weight in balls:
        color_count[color] += 1
        weight_count[color] += weight

    # Initialize the count of sequences
    count = 0

    # Iterate through the color combinations
    for color1 in range(1, N+1):
        for color2 in range(1, N+1):
            if color1 == color2:
                # For same colors, check if their total weight is at most X
                if weight_count[color1] <= X:
                    count += color_count[color1] * (color_count[color1] - 1) // 2
            else:
                # For different colors, check if their total weight is at most Y
                if weight_count[color1] + weight_count[color2] <= Y:
                    count += color_count[color1] * color_count[color2]

    # Return the count modulo MOD
    return count % MOD

# Read the input
N, X, Y = map(int, input().split())
balls = [tuple(map(int, input().split())) for _ in range(N)]

# Print the answer
print(count_sequences(N, X, Y, balls))