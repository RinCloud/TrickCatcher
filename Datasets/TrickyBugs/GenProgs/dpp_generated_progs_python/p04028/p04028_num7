N = int(input())
s = input()

# Initialize the dp table with 0's
dp = [[0] * (N+1) for _ in range(len(s)+1)]

# Base case: if the string is empty, there is 1 way to press the keys
dp[0][0] = 1

# Iterate over the characters in s
for i in range(1, len(s)+1):
    # Update the dp table based on the previous state
    for j in range(N+1):
        # If the character is '0', we have 2 options: either press '0' key or backspace
        if s[i-1] == '0':
            # If we press '0' key, the number of ways is the same as previous state with j-1 presses
            dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % (10**9 + 7)
            # If we press backspace, the number of ways is the same as previous state with j presses
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % (10**9 + 7)
        # If the character is '1', we have 2 options: either press '1' key or backspace
        elif s[i-1] == '1':
            # If we press '1' key, the number of ways is the same as previous state with j-1 presses
            dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % (10**9 + 7)
            # If we press backspace, the number of ways is the same as previous state with j presses
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % (10**9 + 7)

# The number of ways to press the keys N times and get string s is stored at dp[len(s)][N]
print(dp[len(s)][N])