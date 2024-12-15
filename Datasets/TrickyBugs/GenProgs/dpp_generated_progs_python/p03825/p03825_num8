MOD = 10**9 + 7

def calc_comb(n, k):
    numer, denom = 1, 1
    for i in range(1, k + 1):
        numer = numer * (n - i + 1) % MOD
        denom = denom * i % MOD
    return numer * pow(denom, MOD - 2, MOD) % MOD

N, M, K = map(int, input().split())

ans = 0
for i in range(K, N + M + 1, K):
    ans += calc_comb(N + M - 1, i - 1) * calc_comb(i - 1, N - 1) % MOD
    ans %= MOD

print(ans)