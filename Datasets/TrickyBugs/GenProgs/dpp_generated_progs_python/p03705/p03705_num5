# Getting the inputs
N, A, B = map(int, input().split())

# Calculate the minimum sum and maximum sum
min_sum = A * (N - 1) + B
max_sum = A + B * (N - 1)

# Calculate the number of different possible sums
num_sums = max(0, max_sum - min_sum + 1)

# Print the result
print(num_sums)