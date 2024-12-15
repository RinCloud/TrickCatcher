A, B = map(int, input().split())

# Find the least common multiple of A and B
def lcm(a, b):
    return (a * b) // gcd(a, b)

# Find the greatest common divisor of two numbers
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

# Find the least common multiple of A and B
lcm_ab = lcm(A, B)

print(lcm_ab)