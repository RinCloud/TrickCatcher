import itertools

def count_possible_values(N, M, S, operations):
    MOD = 1000000007

    # Store the number of '1' characters at each position
    count = [0] * (N + 1)
    for i in range(1, N + 1):
        count[i] = count[i - 1] + int(S[i - 1] == '1')

    # Calculate the number of possible values for each operation
    possible_values = [0] * (M + 1)
    possible_values[0] = 1
    for i in range(1, M + 1):
        l, r = operations[i - 1]
        ones = count[r] - count[l - 1]
        zeros = r - l + 1 - ones
        possible_values[i] = (2 ** ones - 1) * possible_values[i - 1] % MOD * pow(2, zeros, MOD) % MOD

    return possible_values[M]

# Read the input
N, M = map(int, input().split())
S = input().strip()
operations = [tuple(map(int, input().split())) for _ in range(M)]

# Calculate and print the result
result = count_possible_values(N, M, S, operations)
print(result)