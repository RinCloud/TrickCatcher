# Given the sequence of length N, we can loop through each integer i from 1 to N and find the maximum value among the N-1 elements other than A_i in the sequence. 

import sys

def find_max_values(N, sequence):
    for i in range(N):
        max_value = -sys.maxsize
        for j in range(N):
            if j != i:
                max_value = max(max_value, sequence[j])
        
        print(max_value)

# Read input from standard input
N = int(input())
sequence = []
for _ in range(N):
    sequence.append(int(input()))

# Call the function to find and print the maximum values
find_max_values(N, sequence)