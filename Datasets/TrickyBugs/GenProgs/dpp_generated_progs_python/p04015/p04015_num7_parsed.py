# Here is a python program that solves the problem

def count_card_selections(N, A, cards):
    dp = [[[0] * (2500 + 1) for _ in range(N + 1)] for _ in range(N + 1)]
    dp[0][0][0] = 1
    for i in range(1, N + 1):
        for j in range(i + 1):
            for k in range(j, A + 1):
                dp[i][j][k] = dp[i - 1][j][k] + dp[i - 1][j - 1][k - cards[i - 1]]
    total_selections = 0
    for j in range(1, N + 1):
        total_selections += dp[N][j][A * j]
    return total_selections

# Read input
N, A = map(int, input().split())
cards = list(map(int, input().split()))

# Call the function and print the result
result = count_card_selections(N, A, cards)
print(result)