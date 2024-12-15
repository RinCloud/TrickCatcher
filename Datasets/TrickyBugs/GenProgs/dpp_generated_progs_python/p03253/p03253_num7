import math

def count_sequences(N, M):
    MOD = 10**9 + 7
    count = 0

    factors = []
    for i in range(1, int(math.sqrt(M))+1):
        if M % i == 0:
            factors.append(i)
            if i != M // i:
                factors.append(M // i)

    for factor in factors:
        if factor ** N == M:
            count += 1

    return count % MOD

# Read input values
N, M = map(int, input().split())

# Calculate and print the number of sequences
print(count_sequences(N, M))