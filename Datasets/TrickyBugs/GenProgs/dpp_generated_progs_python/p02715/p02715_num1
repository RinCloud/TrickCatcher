import math

def gcd_sum(N, K):
    mod = 10**9 + 7
    result = 0
    for i in range(1, K+1):
        result = (result + pow(i, N, mod)) % mod
    return result

# Read input values
N, K = map(int, input().split())

# Calculate gcd sum
result = gcd_sum(N, K)

# Print the result
print(result)