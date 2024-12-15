N, K = map(int, input().split())

mod = 10**9 + 7

# Calculate the factorial of a number
def factorial(n):
    res = 1
    for i in range(1, n + 1):
        res = (res * i) % mod
    return res

# Calculate the modular inverse of a number
def mod_inverse(n):
    return pow(n, mod - 2, mod)

# Calculate the binomial coefficient C(n, k) % mod
def binomial_coefficient(n, k):
    numerator = factorial(n)
    denominator = (factorial(k) * factorial(n - k)) % mod
    return (numerator * mod_inverse(denominator)) % mod

# Calculate the number of ways to arrange the balls
def arrangement_ways(N, K):
    ways = []
    for i in range(1, K + 1):
        ways.append(binomial_coefficient(N - K + 1, i) * binomial_coefficient(K - 1, i - 1) % mod)
    return ways

# Print the number of ways to arrange the balls
ways = arrangement_ways(N, K)
for i in ways:
    print(i)