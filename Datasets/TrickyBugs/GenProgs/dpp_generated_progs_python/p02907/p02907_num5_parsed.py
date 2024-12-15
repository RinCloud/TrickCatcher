MOD = 998244353


def solve(N, AB):
    A = [x[0] for x in AB]
    B = [x[1] for x in AB]
    S = sum(A)
    
    dp = [[0] * (N + 1) for _ in range(N)]
    dp[0][0] = 1
    
    for i in range(1, N):
        dp[i][0] = pow(S, i, MOD)
        for j in range(1, N + 1):
            for k in range(j - B[i], j + 1):
                if k < 0:
                    continue
                dp[i][j] += dp[i - 1][k] * pow(S - A[i] + 1, j - k, MOD)
                dp[i][j] %= MOD
    
    res = 0
    for j in range(N + 1):
        res += dp[N - 1][j] * pow(S - A[N - 1] + 1, N - 1 - j, MOD)
        res %= MOD
    
    return res


N = int(input())
AB = []
for _ in range(N):
    AB.append(list(map(int, input().split())))

result = solve(N, AB)
print(result)