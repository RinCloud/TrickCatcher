def count_possible_values(N, M, S, operations):
    MOD = 10**9 + 7

    dp = [0] * (N + 1)
    dp[0] = 1

    for i in range(M):
        l, r = operations[i]
        cnt = [0] * (N + 1)

        for j in range(N):
            cnt[j + 1] = (cnt[j] + dp[j + 1]) % MOD

        for j in range(N):
            if S[j] == '1':
                dp[j + 1] = (cnt[r] - cnt[l - 1]) % MOD
            else:
                dp[j + 1] = (dp[j + 1] + cnt[r] - cnt[l - 1]) % MOD

    return dp[N]

# Read input
N, M = map(int, input().split())
S = input()
operations = [tuple(map(int, input().split())) for _ in range(M)]

# Call the function and print the result
print(count_possible_values(N, M, S, operations))