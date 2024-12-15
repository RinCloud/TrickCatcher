'''
Alice, Bob and Charlie are playing Card Game for Three.
The program calculates the number of possible patterns that will lead to Alice's victory.
'''

MOD = 1000000007

def count_patterns(n, m, k):
    # Calculate the number of possibilities
    possibilities = pow(3, n, MOD) * pow(3, m, MOD) * pow(3, k, MOD) % MOD
    # Subtract the number of patterns where Alice loses
    possibilities -= pow(3, n - 1, MOD) * pow(3, m, MOD) * pow(3, k, MOD) % MOD
    possibilities -= pow(3, n, MOD) * pow(3, m - 1, MOD) * pow(3, k, MOD) % MOD
    possibilities -= pow(3, n, MOD) * pow(3, m, MOD) * pow(3, k - 1, MOD) % MOD
    # Add the number of patterns where Alice wins
    possibilities += pow(3, n - 1, MOD) * pow(3, m - 1, MOD) * pow(3, k, MOD) % MOD
    possibilities += pow(3, n - 1, MOD) * pow(3, m, MOD) * pow(3, k - 1, MOD) % MOD
    possibilities += pow(3, n, MOD) * pow(3, m - 1, MOD) * pow(3, k - 1, MOD) % MOD
    # Subtract the number of patterns where Alice wins twice
    possibilities -= pow(3, n - 1, MOD) * pow(3, m - 1, MOD) * pow(3, k - 1, MOD) % MOD
    # Make sure the result is positive
    possibilities = (possibilities + MOD) % MOD
    return possibilities

# Parsing the input
N, M, K = map(int, input().split())

# Calculating and printing the result
result = count_patterns(N, M, K)
print(result)