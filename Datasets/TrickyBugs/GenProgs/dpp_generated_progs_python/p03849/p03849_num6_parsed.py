import sys

MOD = 10**9 + 7

def count_pairs(N):
    # Calculate the number of pairs using dynamic programming
    dp = [[0] * (N+1) for _ in range(N+1)]
    dp[0][0] = 1
    
    for u in range(N+1):
        for v in range(N+1):
            dp[u][v] = (dp[u][v] + dp[u ^ v][v]) % MOD
            dp[u][v] = (dp[u][v] + dp[u][v-1]) % MOD

    return dp[N][N]

if __name__ == "__main__":
    # Read the input from standard input
    N = int(sys.stdin.readline().strip())
    
    # Find the number of pairs of integers
    result = count_pairs(N)
    
    # Print the result
    print(result)