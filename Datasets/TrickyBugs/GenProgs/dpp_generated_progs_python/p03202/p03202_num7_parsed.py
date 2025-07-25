import sys

def find_minimum_chars(N, A):
    min_chars = float('inf')
    for i in range(N):
        min_chars = min(min_chars, A[i])
    return min_chars

# Read input from the standard input
N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))

# Find the minimum number of characters
min_chars = find_minimum_chars(N, A)

# Print the result
print(min_chars)
