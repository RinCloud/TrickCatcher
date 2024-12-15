# PROGRAM:

A, B = map(int, input().split())

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

lcm = A * B // gcd(A, B)
print(lcm)