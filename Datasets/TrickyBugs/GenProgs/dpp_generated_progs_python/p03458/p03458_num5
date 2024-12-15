# Start of the code

# Read input values
N, K = map(int, input().split())

# Initialize counters
black_count = 0
white_count = 0
black_desires = []
white_desires = []

# Loop through each desire
for _ in range(N):
    x, y, c = input().split()
    x = int(x)
    y = int(y)
    
    # Calculate the position of the desire in the checked pattern
    x_mod = x % (2 * K)
    y_mod = y % (2 * K)
    
    # Check the color of the square in the checked pattern
    if (x_mod < K and y_mod < K) or (x_mod >= K and y_mod >= K):
        square_color = 'B'
    else:
        square_color = 'W'
    
    # Count the number of desires that match the square color
    if c == square_color:
        if c == 'B':
            black_count += 1
        else:
            white_count += 1
    else:
        if c == 'B':
            black_desires.append((x_mod, y_mod))
        else:
            white_desires.append((x_mod, y_mod))

# Determine the number of desires that can be satisfied at the same time
max_desires = min(black_count + len(white_desires), white_count + len(black_desires))

# Display the result
print(max_desires)

# End of the code