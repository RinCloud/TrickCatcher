# Parse input
H, N = map(int, input().split())
spells = []
for _ in range(N):
    a, b = map(int, input().split())
    spells.append((a, b))

# Initialize array to store minimum magic points required for each health value
dp = [float('inf')] * (H + 1)

# Base case: 0 magic points required for health 0
dp[0] = 0

# Dynamic programming
for h in range(1, H + 1):
    for a, b in spells:
        if h - a >= 0:
            dp[h] = min(dp[h], dp[h - a] + b)

# Output the result
print(dp[H])