MOD = 998244353

def solve(N, K):
    fact = [1] * (K+1)
    inv_fact = [1] * (K+1)
    
    for i in range(2, K+1):
        fact[i] = (fact[i-1] * i) % MOD

    inv_fact[K] = pow(fact[K], MOD-2, MOD)
    for i in range(K-1, 0, -1):
        inv_fact[i] = (inv_fact[i+1] * (i+1)) % MOD

    ans = 0
    for i in range(min(N, K)+1):
        ans += (fact[K] * inv_fact[i] * inv_fact[K-i] * pow(2, i, MOD)) % MOD
        ans %= MOD

    return ans

# Taking input
N, K = map(int, input().split())

# Calling the solve function
ans = solve(N, K)

# Printing the result
print(ans)