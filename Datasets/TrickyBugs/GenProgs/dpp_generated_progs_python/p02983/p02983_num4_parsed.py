import sys

# Read input from standard input
input_str = sys.stdin.read()

# Parse the input
L, R = map(int, input_str.strip().split())

# Find the minimum possible value of (i * j) % 2019
min_val = float('inf')
for i in range(L, R):
    for j in range(i+1, R+1):
        val = (i * j) % 2019
        min_val = min(min_val, val)

# Print the result
print(min_val)