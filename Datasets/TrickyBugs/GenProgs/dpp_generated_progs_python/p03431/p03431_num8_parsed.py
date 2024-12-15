MOD = 998244353

def solve(N, K):
    fact = [1]
    inv_fact = [1]
    for i in range(1, K + 1):
        fact.append(fact[-1] * i % MOD)
        inv_fact.append(pow(fact[-1], MOD - 2, MOD))

    ans = 0
    for i in range(min(N, K) + 1):
        if i <= N and K - i <= N:
            count = fact[N] * inv_fact[N - i] * inv_fact[i] % MOD
            count *= fact[N] * inv_fact[N - (K - i)] * inv_fact[K - i] % MOD
            ans += count
            ans %= MOD

    return ans

N, K = map(int, input().split())
print(solve(N, K))