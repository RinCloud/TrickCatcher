# Program to find the count of different possible sequences of colors of bricks
# The count is found modulo 10^9+7

def count_sequences(N, M):
    MOD = 10**9 + 7

    # Calculate factorials up to N+M and their modular inverses
    factorial = [1] * (N + M + 1)
    inverse_factorial = [1] * (N + M + 1)
    for i in range(1, N + M + 1):
        factorial[i] = (factorial[i - 1] * i) % MOD
        inverse_factorial[i] = pow(factorial[i], MOD - 2, MOD)

    # Calculate the count of sequences
    count = 0
    for i in range(M + 1):
        # Calculate the count for each possible number of red bricks
        red_bricks = N + i - 1
        blue_bricks = i
        combinations = (factorial[red_bricks] * inverse_factorial[N - 1] % MOD) * inverse_factorial[blue_bricks] % MOD
        count = (count + combinations) % MOD

    return count

# Main program
N, M = map(int, input().split())
result = count_sequences(N, M)
print(result)