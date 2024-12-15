MOD = 924844033

def count_permutations(N, K):
    dp = [0] * (N + 1)
    dp[0] = 1
     
    for i in range(N):
        dp[i + 1] = (dp[i + 1] - dp[i] + dp[i]) % MOD
        for j in range(2 * K + 1):
            if i + j + 2 <= N:
                dp[i + j + 2] = (dp[i + j + 2] + dp[i]) % MOD
     
    return dp[N]

N, K = map(int, input().split())
answer = count_permutations(N, K)
print(answer)