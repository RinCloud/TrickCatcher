MOD = 10**9 + 7

def count_strings(N, A, B):
    # Create an array to hold the number of ways to get to each string state
    dp = [0] * (N+1)

    # Initialize the first element to 1 since there is only one way to get to the string of all 0s
    dp[0] = 1

    # Iterate through each string length starting from 1 to N
    for i in range(1, N+1):
        # If the string length is less than A, we can only get to the current state by replacing a single 1 at the end
        if i < A:
            dp[i] = dp[i-1]
        # If the string length is less than B, we can get to the current state by replacing a range of 1s
        # or by replacing single 1s at the end of the previous states
        elif i < B:
            dp[i] = (dp[i-1] + dp[i-A]) % MOD
        # If the string length is larger than or equal to B, we can get to the current state by either
        # replacing a range of 0s or 1s or by replacing single 1s at the end of the previous states
        else:
            dp[i] = (dp[i-1] + dp[i-A] - dp[i-B-1]) % MOD

    # Return the number of different strings that can be formed
    return dp[N]


# Read the input
N, A, B = map(int, input().split())

# Find the count of different strings
result = count_strings(N, A, B)

# Print the result
print(result)