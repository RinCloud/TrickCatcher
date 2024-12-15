def count_strings(S, K):
    MOD = 998244353

    # Pre-compute factorials
    factorial = [1]
    for i in range(1, len(S) + K + 1):
        factorial.append((factorial[-1] * i) % MOD)

    # Calculate number of strings
    dp = [[0] * (K + 1) for _ in range(len(S) + 1)]
    dp[0][0] = 1
    for i in range(1, len(S) + 1):
        dp[i][0] = 1
        for j in range(1, K + 1):
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD
    ans = 0
    for i in range(len(S)):
        if S[i] == "1":
            for j in range(K + 1):
                ans = (ans + dp[i][j] * factorial[j] * factorial[len(S) + K - i - 1] * pow(factorial[j] * factorial[K - j], MOD - 2, MOD)) % MOD
    
    return ans

# Read input
S, K = input().split()
K = int(K)
print(count_strings(S, K))