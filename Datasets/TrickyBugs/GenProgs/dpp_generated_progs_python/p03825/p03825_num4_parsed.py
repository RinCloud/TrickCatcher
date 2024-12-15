MOD = 10**9 + 7

def calculate_combinations(n, r):
    result = 1
    for i in range(1, r + 1):
        result = (result * (n - i + 1) // i) % MOD
    return result

def calculate_possible_values(n, m, k):
    result = 0
    for i in range(1, k + 1):
        if (n + m - 1) % (k - 1) == 0:
            combinations = calculate_combinations(n + m - 1, i)
            result = (result + combinations) % MOD
    return result

# Read input
n, m, k = map(int, input().split())

# Calculate and print the number of possible values
print(calculate_possible_values(n, m, k))