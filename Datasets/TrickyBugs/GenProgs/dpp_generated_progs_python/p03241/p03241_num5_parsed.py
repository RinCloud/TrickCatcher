import math

# Read input values
N, M = map(int, input().split())

# Check if N is equal to 1
if N == 1:
    print(M)
else:
    # Find the maximum possible value of the greatest common divisor
    gcd = math.gcd(N, M)

    # Divide M by the gcd to get the maximum possible value of a single element in the sequence
    max_value = M // gcd

    # Print the maximum possible value of the greatest common divisor
    print(max_value)