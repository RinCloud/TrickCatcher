# Skewer Meal

def count_skewer_meal_ways(N, packs):
    MOD = 10**9 + 7
    
    max_pieces = max([a + b for a, b in packs])
    
    dp = [[0] * (max_pieces + 1) for _ in range(N + 1)]
    dp[0][0] = 1
    
    for i in range(1, N + 1):
        a, b = packs[i - 1]
        for j in range(max_pieces + 1):
            dp[i][j] = (dp[i][j] + dp[i - 1][j] * 2) % MOD
            if j >= a:
                dp[i][j] = (dp[i][j] + dp[i - 1][j - a]) % MOD
            if j >= b:
                dp[i][j] = (dp[i][j] + dp[i - 1][j - b]) % MOD
    
    total_ways = (dp[N][0] - 1) % MOD
    return total_ways

# Read input
N = int(input())
packs = []
for _ in range(N):
    A, B = map(int, input().split())
    packs.append((A, B))

# Calculate and print the number of different ways to make a Skewer Meal
result = count_skewer_meal_ways(N, packs)
print(result)