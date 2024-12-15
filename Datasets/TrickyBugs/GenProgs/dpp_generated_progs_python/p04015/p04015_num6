# function to count number of ways to select cards
def count_ways(N, A, cards):
    dp = [[0] * (2500 + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(1, N + 1):
        for j in range(i, 0, -1):
            for k in range(cards[i - 1], 2500 + 1):
                dp[j][k] += dp[j - 1][k - cards[i - 1]]

    result = 0
    for i in range(1, N + 1):
        result += dp[i][i * A]

    return result

# get input
N, A = map(int, input().split())
cards = list(map(int, input().split()))

# call the function and print the result
print(count_ways(N, A, cards))