# Reading input from standard input
import sys
input = sys.stdin.readline

# Reading the value of N
N = int(input())

# Reading the sequence of integers
sequence = []
for _ in range(N):
    sequence.append(int(input()))

# Create a copy of the sequence for comparison
sorted_sequence = sorted(sequence)

# Initialize the count of operation 1
operation_count = 0

# Iterate through the sequence to check and perform Operation 1 if required
for i in range(N):
    # If the current element is not in the correct position
    if sequence[i] != sorted_sequence[i]:
        # Find the index of the current element in the sorted sequence
        correct_index = sorted_sequence.index(sequence[i])
        
        # If the correct index is adjacent to the current index, perform Operation 1
        if abs(correct_index - i) == 1:
            operation_count += 1

# Printing the minimum number of times Operation 1 that Snuke has to perform
print(operation_count)