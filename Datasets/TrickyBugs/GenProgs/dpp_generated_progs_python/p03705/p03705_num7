import math

# Read input values
N, A, B = map(int, input().split())

# Calculate the number of different possible sums
min_sum = A * (N - 1) + B
max_sum = B * (N - 1) + A
diff_sums = max_sum - min_sum + 1

# Print the result
print(max(0, diff_sums))