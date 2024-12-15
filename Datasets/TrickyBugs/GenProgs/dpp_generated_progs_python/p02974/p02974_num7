def get_num_permutations(n, k):
    MOD = 10**9 + 7

    # Initialize a 2D array to store the number of permutations
    dp = [[0] * (k + 1) for _ in range(n + 1)]

    # Base case: there is only one permutation for n = 0 (empty set)
    dp[0][0] = 1

    # Fill the 2D array using dynamic programming
    for i in range(1, n + 1):
        for j in range(k + 1):
            
            # Consider the case when element i is at position j
            for p in range(n):
                # Calculate the oddness of the permutation if i is at position j
                oddness = abs(i - (p + 1))

                # Calculate the remaining oddness after removing oddness contributed by element i
                remaining_oddness = j - oddness

                # Avoid negative indices and check if remaining oddness is valid
                if remaining_oddness >= 0:
                    # Update the number of permutations by adding the previous number of permutations
                    dp[i][j] = (dp[i][j] + dp[i - 1][remaining_oddness]) % MOD

    # Return the number of permutations of oddness k for n elements
    return dp[n][k]


# Take input from the user
n, k = map(int, input().split())

# Call the function and print the result
print(get_num_permutations(n, k))