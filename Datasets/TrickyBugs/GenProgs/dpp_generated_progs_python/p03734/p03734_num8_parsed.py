import sys

def knapsack(N, W, weights, values):
    dp = [[0 for _ in range(W+1)] for _ in range(N+1)]
    for i in range(1, N+1):
        for w in range(1, W+1):
            if weights[i-1] <= w:
                dp[i][w] = max(dp[i-1][w], dp[i-1][w-weights[i-1]] + values[i-1])
            else:
                dp[i][w] = dp[i-1][w]
    return dp[N][W]

if __name__ == "__main__":
    N, W = map(int, input().split())
    weights = []
    values = []
    for _ in range(N):
        w, v = map(int, input().split())
        weights.append(w)
        values.append(v)
    result = knapsack(N, W, weights, values)
    print(result)