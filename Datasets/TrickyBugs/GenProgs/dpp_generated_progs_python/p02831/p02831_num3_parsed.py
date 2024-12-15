# Program

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

A, B = map(int, input().split())

# Calculate the greatest common divisor
gcd_value = gcd(A, B)

# Calculate the minimum number of pieces
minimum_pieces = (A * B) // gcd_value

print(minimum_pieces)