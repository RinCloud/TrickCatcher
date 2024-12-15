# User to enter the value of N
N = int(input())

# Empty list to store the input sequence
sequence = []

# Read the input sequence of length N
for _ in range(N):
    sequence.append(int(input()))

# Iterate through each element in the sequence
for i in range(N):
    # Find the maximum value among the N-1 elements other than A_i
    max_value = max(sequence[:i] + sequence[i+1:])
    
    # Print the maximum value
    print(max_value)