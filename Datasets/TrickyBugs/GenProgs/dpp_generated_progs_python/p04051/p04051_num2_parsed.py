n = int(input())
packs = []
for _ in range(n):
    a, b = map(int, input().split())
    packs.append((a, b))

MOD = 10**9 + 7

def factorial(n):
    res = 1
    for i in range(1, n+1):
        res = (res * i) % MOD
    return res

def combination(n, k):
    numerator = factorial(n)
    denominator = (factorial(k) * factorial(n-k)) % MOD
    return (numerator * pow(denominator, MOD-2, MOD)) % MOD

total_ways = 0

# Calculate the total number of ways to choose two packs
total_packs = combination(n, 2)

# For each pair of packs, calculate the number of ways to make a skewer meal
for i in range(n):
    for j in range(i+1, n):
        a1, b1 = packs[i]
        a2, b2 = packs[j]
        ways = (a1 + b1 + 1) * (a2 + b2 + 1)
        total_ways = (total_ways + ways) % MOD

# Multiply the total number of ways to choose packs with the total number of ways to make a skewer meal
result = (total_packs * total_ways) % MOD

print(result)