s = input()

# Initialize variables
dp = [0] * (len(s) + 1)
dp[0] = 1

# Iterate through the string
for i in range(2, len(s) + 1):
    for j in range(i - 2, -1, -1):
        if s[j:i] != s[j + 1:i] or i == 2:
            dp[i] += dp[j]

# Calculate the result modulo 998244353
result = sum(dp) % 998244353

print(result)