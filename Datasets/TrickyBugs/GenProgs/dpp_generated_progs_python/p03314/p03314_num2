import sys

def count_colorful_subsequences(N, K, M, A):
    MOD = 10**9 + 7
    prefix_count = [[0] * (K + 1) for _ in range(N + 1)]
    dp = [[0] * (K + 1) for _ in range(N + 1)]
    
    # Calculate prefix count
    for i in range(1, N + 1):
        for j in range(1, K + 1):
            prefix_count[i][j] = prefix_count[i - 1][j]
        prefix_count[i][A[i - 1]] += 1
    
    # Calculate dp
    for i in range(1, N + 1):
        for j in range(1, K + 1):
            prev_count = dp[i - 1][j]
            if j > 1:
                prev_count -= dp[prefix_count[i - 1][j - 1]][j - 1]
                prev_count %= MOD
            dp[i][j] = (dp[i - 1][j] + prev_count) % MOD
    
    # Calculate the answer
    answer = 0
    for i in range(1, N + 1):
        answer += dp[i][K]
        answer %= MOD
    
    return answer

# Read input from standard input
input_lines = sys.stdin.readlines()
N, K, M = map(int, input_lines[0].split())
A = list(map(int, input_lines[1].split()))

# Calculate and print the answer
answer = count_colorful_subsequences(N, K, M, A)
print(answer)