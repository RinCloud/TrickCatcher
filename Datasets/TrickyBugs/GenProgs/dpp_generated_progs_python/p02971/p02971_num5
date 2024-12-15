# Python program to find the maximum value among the N-1 elements other than A_i in the given sequence

# Function to find the maximum value among the N-1 elements other than A_i
def find_maximum(sequence):
    n = len(sequence)
    max_values = []

    for i in range(n):
        max_value = max(sequence[:i] + sequence[i+1:]) # Exclude A_i and find the maximum value
        max_values.append(max_value)

    return max_values

# Read the input sequence
n = int(input())
sequence = []

for _ in range(n):
    sequence.append(int(input()))

# Find the maximum values
results = find_maximum(sequence)

# Print the results
for result in results:
    print(result)