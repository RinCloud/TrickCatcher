def min_energy_to_clean_trash(N, X, trash_positions):
    INF = float('inf')
    MAXX = 10 ** 9
    trash = [0] + trash_positions + [0]  # add 0's to the start and end of the array
    
    # Dynamic programming table
    dp = [[INF] * (N + 2) for _ in range(N + 2)]
    for i in range(N + 2):
        dp[i][i] = 0
    
    for i in range(1, N + 2):
        for j in range(i - 1, -1, -1):
            dp[i][j] = min(dp[i][j], dp[i - 1][j] + (trash[i] - trash[i - 1]) // X * X)
            for k in range(i - j - 1):
                dp[i][j] = min(dp[i][j], dp[i - 1 - k][j] + dp[i][i - 1 - k - 1])
    
    return dp[N + 1][0]

# Read input
N, X = map(int, input().split())
trash_positions = list(map(int, input().split()))

# Call function and print the answer
answer = min_energy_to_clean_trash(N, X, trash_positions)
print(answer)