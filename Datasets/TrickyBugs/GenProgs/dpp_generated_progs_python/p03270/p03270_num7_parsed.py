def count_combinations(K, N):
    mod = 998244353
    
    # Initialize a 2D matrix to store the number of combinations
    # dp[i][j] represents the number of combinations of i dice with j sides
    dp = [[0] * (2*K+1) for _ in range(N+1)]
    dp[0][0] = 1
    
    for i in range(1, N+1):
        for j in range(1, 2*K+1):
            # Exclude the current side j
            dp[i][j] = dp[i][j-1]
            
            # Include the current side j
            if j >= 2 and i >= 2:
                dp[i][j] = (dp[i][j] + dp[i-2][j-2]) % mod
    
    # Calculate the number of combinations for each i
    answers = []
    for i in range(2, 2*K+1):
        answer = dp[N][i]
        answers.append(answer)
    
    return answers


# Read input from standard input
K, N = map(int, input().split())

# Call the function count_combinations and print the output
answers = count_combinations(K, N)
for answer in answers:
    print(answer)