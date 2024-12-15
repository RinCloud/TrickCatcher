def count_strings(S, K):
    mod = 998244353
    length = len(S)
    dp = [[0] * (length + 1) for _ in range(K + 1)]
    
    # Initialize the base case
    dp[0][0] = 1
    
    for k in range(1, K + 1):
        for i in range(length + 1):
            for j in range(i + 1, length + 1):
                # If the i-th character is 0 and the j-th character is 1, perform the operation
                if i < j and S[i] == '0' and S[j - 1] == '1':
                    dp[k][j] = (dp[k][j] + dp[k - 1][i]) % mod
    
    result = sum(dp[K]) % mod
    return result


# Read the input
S, K = input().split()

# Call the function and print the output
output = count_strings(S, int(K))
print(output)
