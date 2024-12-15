# The maximum possible total weight of an independent set in graph W can be calculated using dynamic programming.
# Let dp[i][j][k] denote the maximum possible total weight of an independent set in the subgraph of W formed by considering the first i vertices of X, the first j vertices of Y, and the first k vertices of Z.
# We can calculate dp[i][j][k] using the following recurrence relation:
# dp[i][j][k] = max(dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1]) + pow(10, 18 * (i + j + k))
# The base cases are dp[0][0][0] = 0 for empty subgraph and dp[1][1][1] = pow(10, 18 * 3) for subgraph with single vertex (x_1, y_1, z_1).

import math

def calculate_independent_set_weight(N, edges_X, edges_Y, edges_Z):
    MOD = 998244353
    dp = [[[0] * (N + 1) for _ in range(N + 1)] for _ in range(N + 1)]
    dp[1][1][1] = pow(10, 18 * 3, MOD)

    for i in range(1, N + 1):
        for j in range(1, N + 1):
            for k in range(1, N + 1):
                dp[i][j][k] = max(dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1]) + pow(10, 18 * (i + j + k))

    total_weight = 0
    for (x_u, x_v) in edges_X:
        for w in range(1, N + 1):
            for l in range(1, N + 1):
                total_weight = (total_weight + dp[N][w][l]) % MOD

    for (y_u, y_v) in edges_Y:
        for w in range(1, N + 1):
            for l in range(1, N + 1):
                total_weight = (total_weight + dp[w][N][l]) % MOD

    for (z_u, z_v) in edges_Z:
        for w in range(1, N + 1):
            for l in range(1, N + 1):
                total_weight = (total_weight + dp[w][l][N]) % MOD

    return total_weight

# Read input
N = int(input())
M1 = int(input())
edges_X = []
for _ in range(M1):
    a, b = map(int, input().split())
    edges_X.append((a, b))

M2 = int(input())
edges_Y = []
for _ in range(M2):
    c, d = map(int, input().split())
    edges_Y.append((c, d))

M3 = int(input())
edges_Z = []
for _ in range(M3):
    e, f = map(int, input().split())
    edges_Z.append((e, f))

# Calculate and print the maximum possible total weight of an independent set in W
ans = calculate_independent_set_weight(N, edges_X, edges_Y, edges_Z)
print(ans)