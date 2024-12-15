# Generate all possible powers of 6 and 9 that are less than or equal to N
powers = []
for i in range(7):
    if 6 ** i <= N:
        powers.append(6 ** i)
    if 9 ** i <= N:
        powers.append(9 ** i)

# Initialize the minimum number of operations required to withdraw N yen to infinity
min_operations = float("inf")

# Use dynamic programming to find the minimum number of operations required
dp = [float("inf")] * (N + 1)
dp[0] = 0
for i in range(1, N + 1):
    for power in powers:
        if i - power >= 0:
            dp[i] = min(dp[i], dp[i - power] + 1)

# Print the minimum number of operations required to withdraw N yen
print(dp[N])