# Program

def count_sequences(N, A):
    MOD = 10**9 + 7
    dp = [[0] * (N+1) for _ in range(N+1)]
    dp[0][0] = 1

    for i in range(N+1):
        for j in range(N+1):
            if i > 0 and A[i+j-1] == -1:
                dp[i][j] += dp[i-1][j]
            if j > 0 and A[i+j-1] == -1:
                dp[i][j] += dp[i][j-1]
            dp[i][j] %= MOD
    
    return dp[N][N]


# Read input
N = int(input())
A = list(map(int, input().split()))

# Call function and print result
result = count_sequences(N, A)
print(result)