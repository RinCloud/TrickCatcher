# Program to find the count of different possible sequences of colors of 2M bricks

def count_sequences(N, M):
    MOD = 10**9 + 7
    dp = [[0]*(2*M+1) for _ in range(N+1)]
    dp[0][0] = 1
    
    for i in range(1, N+1):
        for j in range(1, 2*M+1):
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % MOD
    
    answer = 0
    for i in range(M, 2*M+1):
        answer = (answer + dp[N][i]) % MOD
    
    return answer

# Reading the input
N, M = map(int, input().split())

# Finding the count of different possible sequences of colors
count = count_sequences(N, M)

# Printing the output
print(count)