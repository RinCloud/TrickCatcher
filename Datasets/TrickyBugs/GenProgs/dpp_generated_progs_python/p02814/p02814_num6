from fractions import Fraction

N, M = map(int, input().split())
A = list(map(int, input().split()))

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

lcm_val = A[0]
for i in range(1, N):
    lcm_val = lcm(lcm_val, A[i])

count = 0
for i in range(1, M+1):
    if Fraction(i, lcm_val).denominator == 1:
        count += 1

print(count)