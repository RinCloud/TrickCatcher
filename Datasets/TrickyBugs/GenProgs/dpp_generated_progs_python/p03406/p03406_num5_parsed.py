import math

mod = 10**9 + 7

def count_permutations(N, M, A):
    if M == 0:
        return math.factorial(N) % mod
    p = [0] * (N + 1)
    p[0] = 1
    for i in range(1, N + 1):
        p[i] = p[i - 1] * i % mod
    dp = [0] * (1 << N)
    dp[0] = 1
    for mask in range(1 << N):
        cnt = bin(mask).count('1')
        for j in range(1, N + 1):
            if ((mask >> (j - 1)) & 1) == 0:
                dp[mask | (1 << (j - 1))] += dp[mask] * (p[N - cnt] // p[N - cnt - 1]) % mod
                dp[mask | (1 << (j - 1))] %= mod
    ans = pow(2, N - M, mod)
    for i in A:
        for j in range(i, 2 ** N):
            ans = (ans + dp[j]) % mod
    return ans

N, M = map(int, input().split())
A = list(map(int, input().split()))

print(count_permutations(N, M, A))