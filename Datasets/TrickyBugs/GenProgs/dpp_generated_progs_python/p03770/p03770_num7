from collections import defaultdict

def count_sequences(N, X, Y, balls):
    MOD = 10**9 + 7

    dp = [[0] * N for _ in range(N)]
    dp1 = [[0] * N for _ in range(N)]

    color_count = defaultdict(int)
    for c, _ in balls:
        color_count[c] += 1

    c_counts = list(color_count.values())
    c_count_max = max(c_counts)

    ans = 1
    
    for c_count in c_counts:
        ans -= 1
        for i in range(1, N+1):
            dp[0][i] = dp1[0][i] = 1

        for x in range(1, c_count+1):
            for i in range(1, N+1):
                dp[x][i] = dp[x-1][i-1] + dp1[x-1][i-1]
                dp[x][i] %= MOD

                dp1[x][i] = dp[x][i] + dp1[x][i-1]
                dp1[x][i] %= MOD

        for x in range(1, c_count+1):
            ans += dp[c_count][x] * pow(c_count-1, N-x, MOD) % MOD
            ans %= MOD

    return ans

# Read input
N, X, Y = map(int, input().split())
balls = [list(map(int, input().split())) for _ in range(N)]

# Print the answer
print(count_sequences(N, X, Y, balls))