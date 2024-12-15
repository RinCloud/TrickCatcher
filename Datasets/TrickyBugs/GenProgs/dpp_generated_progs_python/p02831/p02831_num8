# Start of program

# Read input from standard input
A, B = map(int, input().split())

# Calculate the minimum number of pieces that can be evenly distributed
# Minimum number will be the least common multiple (LCM) of A and B
# LCM can be calculated using the formula: LCM(A, B) = (A * B) / GCD(A, B)
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

lcm = (A * B) // gcd(A, B)

# Print the minimum number of pieces
print(lcm)

# End of program