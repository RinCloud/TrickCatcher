import math

# Read input values
K, N = map(int, input().split())

# Calculate the total number of sequences
X = K**N

# Initialize sequence
sequence = []

# Initialize current element
current_element = 1

# Generate sequence
sequence.append(current_element)
for _ in range(N - 1):
    if math.ceil(X / 2) <= X - (K - current_element)**(N - len(sequence)):
        current_element += 1
    sequence.append(current_element)

# Print the sequence
print(*sequence)
