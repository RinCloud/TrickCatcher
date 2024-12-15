import sys

# Read input
N = int(sys.stdin.readline().strip())
a = list(map(int, sys.stdin.readline().split()))

# Calculate maximum value of f
max_f = 0
for m in range(max(a)):
    f = sum(m % ai for ai in a)
    max_f = max(max_f, f)

# Print the result
print(max_f)