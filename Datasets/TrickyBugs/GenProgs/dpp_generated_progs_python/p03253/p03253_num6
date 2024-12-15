def count_sequences(N, M):
    MOD = 10**9 + 7
    
    def modular_inverse(x, p):
        return pow(x, p - 2, p)
    
    def binomial_coefficient(n, k):
        if k > n - k:
            k = n - k
        result = 1
        for i in range(k):
            result = (result * (n - i)) % MOD
            result = (result * modular_inverse(i + 1, MOD)) % MOD
        return result
    
    def count_prime_factors(x):
        count = 0
        i = 2
        while i * i <= x:
            if x % i == 0:
                count += 1
                while x % i == 0:
                    x //= i
            i += 1
        if x > 1:
            count += 1
        return count
    
    def count_sequences_helper(N, M):
        count = 1
        factors = count_prime_factors(M)
        for i in range(1, N + 1):
            count = (count * binomial_coefficient(N + i - 1, i)) % MOD
            count = (count * pow(2, factors - 1, MOD)) % MOD
        return count
    
    return count_sequences_helper(N, M)

# Read input
N, M = map(int, input().split())

# Print the result
print(count_sequences(N, M))