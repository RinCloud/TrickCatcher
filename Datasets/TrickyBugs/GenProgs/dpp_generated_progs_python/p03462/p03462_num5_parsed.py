N, K = map(int, input().split())
s = input()

mod = 10**9 + 7

dp = [[[0] * (N+1) for _ in range(N+1)] for _ in range(K+1)]
dp[0][0][0] = 1

for k in range(K):
    for red in range(N+1):
        for blue in range(N+1):
            for new_red in range(red+1):
                if s[k] == 'b' and new_red != red:
                    continue
                for new_blue in range(blue+1):
                    if s[k] == 'r' and new_blue != blue:
                        continue
                    dp[k+1][new_red][new_blue] += dp[k][red][blue]
                    dp[k+1][new_red][new_blue] %= mod

ans = dp[K][N][N]
print(ans)