MOD = 10**9 + 7

def count_sequences(N, A):
    M = 2 * N
    dp = [[0] * (N + 1) for _ in range(M + 1)]
    dp[0][0] = 1

    for i in range(1, M + 1):
        dp[i][0] = dp[i - 1][0] * (i - 1) % MOD
        for j in range(1, min(i, N) + 1):
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1] * (i - 1)) % MOD

    freq = [0] * (M + 1)
    for a in A:
        if a != -1:
            freq[a] += 1

    ans = 1
    for i in range(1, M + 1):
        ans = ans * dp[freq[i]][1] % MOD
        for j in range(2, freq[i] + 1):
            ans = ans * j % MOD

    return ans

N = int(input())
A = list(map(int, input().split()))

result = count_sequences(N, A)
print(result)