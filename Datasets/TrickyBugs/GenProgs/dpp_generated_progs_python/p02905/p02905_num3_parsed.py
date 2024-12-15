from math import gcd
from functools import reduce

N = int(input())
A = list(map(int, input().split()))

MOD = 998244353

# function to calculate lcm
def lcm(a, b):
    return (a * b) // gcd(a, b)

# sum of lcm for all pairs
lcm_sum = sum([lcm(A[i], A[j]) for i in range(N-1) for j in range(i+1, N)]) % MOD

print(lcm_sum)