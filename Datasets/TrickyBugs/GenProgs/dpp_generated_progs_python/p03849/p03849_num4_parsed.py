MOD = 10**9 + 7

def count_pairs(N):
    ans = N*(N+2)%MOD
    ans = (ans * ((N*N + N + 2) // 2)) % MOD
    return ans

N = int(input())
print(count_pairs(N))