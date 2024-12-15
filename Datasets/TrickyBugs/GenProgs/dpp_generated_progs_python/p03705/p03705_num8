# Get the input values
N, A, B = map(int, input().split())

# Calculate the minimum and maximum possible sum
min_sum = A * (N - 1) + B
max_sum = A + B * (N - 1)

# Calculate the number of different possible sums
num_sums = max_sum - min_sum + 1 if A <= B else 0

# Print the result
print(num_sums)