import sys

def count_sequences(N, S, A):
    MOD = 998244353
    dp = [[0] * (S + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(N):
        for j in range(S + 1):
            dp[i + 1][j] = dp[i][j] * 2
            if j - A[i] >= 0:
                dp[i + 1][j] += dp[i][j - A[i]]
            dp[i + 1][j] %= MOD

    ans = 0
    for i in range(N):
        for j in range(i + 1, N + 1):
            ans += dp[j][S]
            ans %= MOD
    return ans

if __name__ == "__main__":
    N, S = map(int, input().split())
    A = list(map(int, input().split()))
    print(count_sequences(N, S, A))
    sys.stdout.flush()
