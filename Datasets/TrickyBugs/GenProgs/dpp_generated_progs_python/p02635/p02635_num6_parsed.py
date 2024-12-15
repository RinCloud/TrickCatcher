import itertools

def solve_string(S, K):
    MOD = 998244353
    N = len(S)

    # Count the number of 0's and 1's in the original string
    count_0 = S.count('0')
    count_1 = S.count('1')

    # Compute the number of strings that can be formed between 0 and K times
    total_count = 0
    for i in range(K + 1):
        # Compute the number of ways to select i pairs of 0's and 1's
        num_pairs = min(count_0, count_1) * i

        # Compute the number of ways to distribute the remaining 0's and 1's
        num_remaining = count_0 + count_1 - num_pairs
        num_ways = 1
        for j in range(num_remaining):
            num_ways *= (j + 1)
            num_ways %= MOD

        # Compute the number of ways to permute the pairs of 0's and 1's
        num_permutations = 1
        for j in range(num_pairs):
            num_permutations *= (j + 1)
            num_permutations %= MOD

        # Compute the number of strings that can be formed by applying the operation i times
        num_strings = num_ways * num_permutations
        num_strings %= MOD

        # Add the number of strings to the total count
        total_count += num_strings
        total_count %= MOD

    return total_count

# Read the input
S, K = input().split()

# Solve the problem and print the result
result = solve_string(S, int(K))
print(result)