def calculate_f(N, S, A):
    mod = 998244353
    dp = [[0] * (S + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(N):
        for j in range(S + 1):
            dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % mod  # without selecting i+1

            if j + A[i] <= S:
                dp[i + 1][j + A[i]] = (dp[i + 1][j + A[i]] + dp[i][j]) % mod  # selecting i+1

    result = 0
    for i in range(1, N + 1):
        result = (result + dp[i][S]) % mod

    return result


N, S = map(int, input().split())
A = list(map(int, input().split()))

result = calculate_f(N, S, A)
print(result)