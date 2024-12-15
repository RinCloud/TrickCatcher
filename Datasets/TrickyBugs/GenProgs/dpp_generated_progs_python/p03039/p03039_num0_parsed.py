MOD = 10**9 + 7

def solve(n, m, k):
    def comb(n, r):
        if r == 0 or n == r:
            return 1
        return (fact[n] * pow(fact[r], MOD-2, MOD) * pow(fact[n-r], MOD-2, MOD)) % MOD

    fact = [1]*(n*m+1)
    for i in range(1, n*m+1):
        fact[i] = (fact[i-1] * i) % MOD

    ans = 0
    for i in range(n):
        for j in range(m):
            cnt = n*m-1
            dist = (i*(n-i-1))//2 * m + (j*(m-j-1))//2 * n
            if cnt-k < 1:
                ans += dist
            else:
                ans += (dist * comb(cnt, k-1)) % MOD
            ans %= MOD

    return ans

N, M, K = map(int, input().split())
print(solve(N, M, K))