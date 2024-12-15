def expected_generations(N, AB):
    mod = 998244353

    # Calculate the total sum of A_i values
    total_sum = sum(AB[i][0] for i in range(N))

    # Create a DP table to store the expected generations
    dp = [[0] * (total_sum + 1) for _ in range(N)]
    dp[0][0] = 1

    # Iterate over each number i
    for i in range(N):
        # Iterate over each sum j
        for j in range(total_sum + 1):
            # Iterate over each number of times k
            for k in range(AB[i][1], j + 1):
                dp[i][j] += dp[i-1][j-k] * (AB[i][0] - 1)
                dp[i][j] %= mod

    # Calculate the expected generations
    expected = 0
    for i in range(N):
        expected += dp[i][total_sum]
        expected %= mod

    return expected

# Read input values
N = int(input())
AB = []
for _ in range(N):
    a, b = map(int, input().split())
    AB.append((a, b))

# Call the function and print the result
print(expected_generations(N, AB))