MOD = 10**9 + 7

def solve(N, M, K):
    fact = [1] * (N*M+1)
    inv_fact = [1] * (N*M+1)
    for i in range(1, N*M+1):
        fact[i] = fact[i-1] * i % MOD
        inv_fact[i] = pow(fact[i], MOD-2, MOD)
    
    def choose(n, k):
        return (fact[n] * ((inv_fac