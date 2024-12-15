def generate_integer(N, probabilities):
    MOD = 998244353
    dp = [[0] * (N + 1) for _ in range(sum(probabilities) + 1)]
    dp[0][0] = 1
    for i in range(1, sum(probabilities) + 1):
        s = 0
        for j in range(N):
            if i - probabilities[j] >= 0:
                s = (s + dp[i - probabilities[j]][N - 1]) % MOD
            dp[i][j] = (dp[i - 1][j] + s) % MOD
    ans = 0
    for i in range(1, sum(probabilities) + 1):
        s = 0
        for j in range(N):
            if i - probabilities[j] >= 0:
                s = (s + dp[i - probabilities[j]][N - 1]) % MOD
        ans = (ans + s) % MOD
    return ans

N = int(input())
probabilities = []
for _ in range(N):
    A, B = map(int, input().split())
    probabilities.append(A)
print(generate_integer(N, probabilities))