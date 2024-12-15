# Here's a Python program that solves the problem based on the given input and output specifications:

def count_strings(S, K):
    MOD = 998244353
    n = len(S)
    dp = [[0] * (K + 1) for _ in range(n + 1)]
    dp[0][0] = 1

    for i in range(1, n + 1):
        for j in range(0, K + 1):
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD
            for k in range(i - 1, 0, -1):
                if S[k:i] == "10":
                    dp[i][j] = (dp[i][j] + dp[k - 1][j - 1]) % MOD

    ans = 0
    for j in range(K + 1):
        ans = (ans + dp[n][j]) % MOD

    return ans

if __name__ == "__main__":
    S, K = input().split()
    K = int(K)
    result = count_strings(S, K)
    print(result)