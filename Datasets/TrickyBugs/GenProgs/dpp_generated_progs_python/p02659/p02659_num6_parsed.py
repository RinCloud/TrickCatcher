# Approach:
1. Read the input values for A and B.
2. Multiply A and B.
3. Truncate the fractional part of the result.
4. Print the truncated result.

# Program:

import math

# read input values for A and B
A, B = input().split()
A = int(A)
B = float(B)

# multiply A and B
result = A * B

# truncate the fractional part
truncated_result = math.trunc(result)

# print the truncated result
print(truncated_result)