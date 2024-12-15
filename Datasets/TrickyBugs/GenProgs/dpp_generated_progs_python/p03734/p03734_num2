# Implementation of the Knapsack problem using Dynamic Programming

def knapSack(N, W, weights, values):
    dp = [[0] * (W + 1) for _ in range(N + 1)]

    for i in range(1, N + 1):
        for j in range(1, W + 1):
            if weights[i - 1] <= j:
                dp[i][j] = max(values[i - 1] + dp[i - 1][j - weights[i - 1]], dp[i - 1][j])
            else:
                dp[i][j] = dp[i - 1][j]

    return dp[N][W]


# Input parsing
N, W = map(int, input().split())
weights = []
values = []

for _ in range(N):
    w, v = map(int, input().split())
    weights.append(w)
    values.append(v)

# Function call
print(knapSack(N, W, weights, values))