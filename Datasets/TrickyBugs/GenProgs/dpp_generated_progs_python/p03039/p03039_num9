MOD = 10**9 + 7

def calculate_cost(N, M, K):
    fact = [1] * (N * M + 1)
    inv_fact = [1] * (N * M + 1)

    for i in range(2, N * M + 1):
        fact[i] = (fact[i - 1] * i) % MOD

    inv_fact[N * M] = pow(fact[N * M], MOD - 2, MOD)

    for i in range(N * M - 1, 0, -1):
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD

    def binomial_coefficient(n, k):
        return (fact[n] * inv_fact[k] * inv_fact[n - k]) % MOD

    total_cost = 0

    for dx in range(1, N + 1):
        for dy in range(1, M + 1):
            if dx > 1 or dy > 1:
                ways = binomial_coefficient(N * M - 2, K - 2)
                cost = (2 * dx * dy) % MOD
                total_cost = (total_cost + (cost * ways) % MOD) % MOD

    return total_cost

N, M, K = map(int, input().split())
print(calculate_cost(N, M, K))