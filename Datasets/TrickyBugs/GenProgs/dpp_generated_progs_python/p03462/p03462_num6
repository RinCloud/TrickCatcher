N, K = map(int, input().split())
s = input()

MOD = 10**9 + 7

# dp[i][j][k] represents the number of sequences when we/ve processed first i operations, and at the jth segment's end, 
# there are k white balls.
dp = [[[0] * (N + 1) for _ in range(N + 1)] for _ in range(K + 1)]
dp[0][0][0] = 1

for i in range(1, K + 1):
    # when the i-th operation is 'r', we can choose any segment length j, and the number of white balls at 
    # the end of the segment can range from 0 to N (inclusive).
    if s[i - 1] == 'r':
        for j in range(N + 1):
            for k in range(N + 1):
                dp[i][j][k] += dp[i-1][j][k]
                dp[i][j][k] %= MOD
                if j > 0:
                    dp[i][j][k] += dp[i-1][j-1][k]
                    dp[i][j][k] %= MOD
    # when the i-th operation is 'b', we can choose any segment length j, and the number of white balls at 
    # the end of the segment can range from 0 to k-1 (inclusive), because if k white balls at the segment's end
    # have been painted red, we cannot paint any more balls blue.
    else:
        for j in range(N + 1):
            for k in range(j):
                dp[i][j][k] += dp[i-1][j][k]
                dp[i][j][k] %= MOD
                if j > 0:
                    dp[i][j][k] += dp[i-1][j-1][k]
                    dp[i][j][k] %= MOD

# the answer is the sum of dp[K][j][k] for all 0 <= j <= N and 0 <= k <= N.
ans = 0
for j in range(N + 1):
    for k in range(N + 1):
        ans += dp[K][j][k]
        ans %= MOD

print(ans)