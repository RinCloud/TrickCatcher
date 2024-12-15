MOD = 10**9 + 7

def count_sequences(N, M):
    # calculate prime factors of M
    prime_factors = []
    i = 2
    while i * i <= M:
        if M % i:
            i += 1
        else:
            M //= i
            prime_factors.append(i)
    if M > 1:
        prime_factors.append(M)
    
    # count the number of sequences
    count = 1
    for factor in set(prime_factors):
        exponent = prime_factors.count(factor)
        count *= comb(N + exponent - 1, exponent) % MOD
    
    return count % MOD

# read input
N, M = map(int, input().split())

# calculate and print the count of sequences
print(count_sequences(N, M))