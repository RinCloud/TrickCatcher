# Read the inputs
N = int(input())
K = int(input())

# Initialize the current value on the board
value = 1

# Perform N operations
for _ in range(N):
    # Evaluate which operation to perform
    if value * 2 <= value + K:
        # Perform operation A
        value *= 2
    else:
        # Perform operation B
        value += K

# Print the minimum value displayed on the board after N operations
print(value)