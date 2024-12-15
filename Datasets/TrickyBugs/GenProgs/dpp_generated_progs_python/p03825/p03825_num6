"""
# Helper function to calculate the modular exponentiation
def power(x, y, p):
    res = 1
    x = x % p

    while y > 0:
        if y & 1:
            res = (res * x) % p
        y = y >> 1
        x = (x * x) % p
    
    return res

# Read the input values
N, M, K = map(int, input().split())

# Calculate the factorial of N+M-2, modulo 10^9 + 7
factorial = [1] * (N + M - 1)
for i in range(1, N + M - 1):
    factorial[i] = (factorial[i - 1] * i) % (10**9 + 7)

# Calculate the inverse of factorial modulo 10^9 + 7
inverse_factorial = [1] * (K - 1)
inverse_factorial[K - 2] = power(factorial[K - 2], 10**9 + 7 - 2, 10**9 + 7)
for i in range(K - 3, -1, -1):
    inverse_factorial[i] = (inverse_factorial[i + 1] * (i + 1)) % (10**9 + 7)

# Calculate the answer using combinatorics
ans = 0
for i in range(K):
    ans += ((factorial[N + M - 2] * inverse_factorial[i] * inverse_factorial[K - 2 - i]) % (10**9 + 7))

# Print the answer modulo 10^9 + 7
print(ans % (10**9 + 7))
"""