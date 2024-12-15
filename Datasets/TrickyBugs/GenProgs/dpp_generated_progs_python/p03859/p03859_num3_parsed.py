MOD = 1000000007

def calculate_possible_values(N, M, S, operations):
    dp = [[0] * N for _ in range(N)]
    for l, r in reversed(operations):
        for i in range(l-1, r):
            for j in range(i, r):
                dp[i][j] += dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1]
                if dp[i][j] >= MOD:
                    dp[i][j] -= MOD
            dp[i][j] += 1
    count = 0
    for i in range(N):
        for j in range(N):
            count += dp[i][j]
            if count >= MOD:
                count -= MOD
    return count

# Read inputs
N, M = map(int, input().split())
S = input().strip()
operations = [list(map(int, input().split())) for _ in range(M)]

# Calculate and print the result
result = calculate_possible_values(N, M, S, operations)
print(result)