# Program to calculate sum of scores over all possible permutations

def calculate_score(n):
    # Initialize variables
    MOD = 10**9 + 7
    fact = [1] * (n + 1)
    inv_fact = [1] * (n + 1)

    # Calculate factorial and inverse factorial
    for i in range(1, n + 1):
        fact[i] = (fact[i - 1] * i) % MOD
        inv_fact[i] = pow(fact[i], MOD - 2, MOD)

    # Calculate sum of scores
    score = 0
    for i in range(1, n + 1):
        c = (fact[n] * inv_fact[i]) % MOD
        c = (c * inv_fact[n - i]) % MOD
        score = (score + c) % MOD

    return score

# Get input from user
n = int(input())

# Calculate and print the sum of scores
print(calculate_score(n))