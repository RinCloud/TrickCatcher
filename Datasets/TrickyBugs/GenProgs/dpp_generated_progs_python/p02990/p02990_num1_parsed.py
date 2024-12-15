def calc_ways(N, K):
    # Initialize the ways array with 0s
    ways = [0] * (K + 1)
    ways[0] = 1

    for i in range(1, K + 1):
        # Calculate the number of ways for Takahashi to need i moves
        for j in range(1, N + 1):
            ways[i] = (ways[i] + ways[i - 1]) % (10**9 + 7)

    return ways[1:]

# Read input values
N, K = map(int, input().split())

# Calculate the number of ways for each i
results = calc_ways(N, K)

# Print the results
for result in results:
    print(result)
