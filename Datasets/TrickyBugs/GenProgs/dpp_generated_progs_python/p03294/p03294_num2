import sys

# Read input values
N = int(input())
a = list(map(int, input().split()))

# Initialize maximum value of f
max_f = 0

# Loop through all possible values of m
for m in range(max(a)):
    # Compute f(m)
    f_sum = sum(m % ai for ai in a)
    # Update maximum value of f
    max_f = max(max_f, f_sum)

# Print the maximum value of f
print(max_f)