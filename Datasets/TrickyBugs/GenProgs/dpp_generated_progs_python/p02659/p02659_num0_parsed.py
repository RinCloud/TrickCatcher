# Read input from standard input
A, B = input().split()

# Parse inputs
A = int(A)
B = float(B)

# Compute the product and truncate fractional part
result = int(A * B)

# Print the result
print(result)