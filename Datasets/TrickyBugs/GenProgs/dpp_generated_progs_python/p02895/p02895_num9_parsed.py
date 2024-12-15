def count_pairs(N, A):
    dp = [[0] * (1 << (2 * N)) for _ in range(N + 1)]
    dp[0][0] = 1

    for bit in range(1 << (2 * N)):
        n = bin(bit).count('1')
        for j in range(2 * N):
            if (bit >> j) & 1:
                continue
            if A[n][j]:
                for k in range(2 * N):
                    if (bit >> k) & 1 and A[n + 1][k]:
                        dp[n + 1][bit | (1 << j) | (1 << k)] += dp[n][bit]
                        dp[n + 1][bit | (1 << j) | (1 << k)] %= 10**9 + 7
    return dp[N][(1 << (2 * N)) - 1]


N = int(input())
A = []
for _ in range(2 * N):
    A.append(list(map(int, input())))

result = count_pairs(N, A)
print(result)