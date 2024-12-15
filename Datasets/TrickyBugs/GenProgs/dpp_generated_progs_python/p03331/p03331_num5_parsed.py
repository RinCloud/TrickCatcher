n = int(input())

# Find A and B such that A + B = n
# We want to minimize the sum of the digits of A + sum of the digits of B

# Try all possible values for A and check if it is a valid solution
# A must be between 1 and n-1 (inclusive)
min_sum = float('inf')
for A in range(1, n):
  B = n - A
  # Calculate the sum of the digits of A and B
  sum_of_digits = sum(list(map(int, str(A)))) + sum(list(map(int, str(B))))
  # Update the minimum sum if necessary
  min_sum = min(min_sum, sum_of_digits)

# Output the minimum sum
print(min_sum)