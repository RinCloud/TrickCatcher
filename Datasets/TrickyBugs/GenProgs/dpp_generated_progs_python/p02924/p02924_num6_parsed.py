import math

# Read the input
N = int(input())

# Calculate the maximum possible value of M1 + M2 + ... + MN
max_sum = math.ceil(N / 2) * (N // 2)

# Print the result
print(max_sum)