import math

N, A, B, K = map(int, input().split())

MOD = 998244353

def mod_inv(n, mod):
    return pow(n, mod - 2, mod)

def comb(n, r, mod):
    if r > n - r:
        r = n - r
    res = 1
    for i in range(r):
        res = (res * (n - i)) % mod
        res = (res * mod_inv(i + 1, mod)) % mod
    return res

ans = 0
for i in range(N + 1):
    if A * i > K:
        break
    if (K - A * i) % B == 0:
        j = (K - A * i) // B
        if j <= N:
            ans += comb(N, i, MOD) * comb(N, j, MOD)
            ans %= MOD

print(ans)