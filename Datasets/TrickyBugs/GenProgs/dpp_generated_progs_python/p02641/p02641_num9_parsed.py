import sys

# Read input
X, N = map(int, sys.stdin.readline().strip().split())
p = list(map(int, sys.stdin.readline().strip().split()))

# Find the nearest integer
nearest = None
min_diff = float('inf')

# Check all the integers not contained in the sequence
for i in range(1, 101):
    if i not in p:
        diff = abs(i - X)
        if diff < min_diff:
            nearest = i
            min_diff = diff

# Print the answer
print(nearest)