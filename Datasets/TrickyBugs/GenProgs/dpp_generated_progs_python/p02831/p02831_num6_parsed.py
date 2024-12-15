# Here is a Python program that finds the minimum number of pieces that can be evenly distributed to the guests in both cases with A guests and B guests:

# Read input from standard input
A, B = map(int, input().split())

# Calculate the least common multiple (LCM) of A and B
lcm = A * B

# Find the greatest common divisor (GCD) of A and B using Euclidean algorithm
while B:
    A, B = B, A % B

# Calculate the minimum number of pieces
min_pieces = lcm // A

# Print the minimum number of pieces
print(min_pieces)