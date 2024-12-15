import sys

def count_valid_strings(N):
    # Initialize a 2D matrix to store the count of valid strings
    dp = [[[[0 for _ in range(4)] for _ in range(4)] for _ in range(4)] for _ in range(N+1)]
    
    # Initialize the base cases for N = 0, 1, 2
    for i in range(4):
        for j in range(4):
            for k in range(4):
                if i != 0 and j != 2 and k != 1:
                    dp[3][i][j][k] = 1

    # Iterate through all possible lengths of the string
    for n in range(4, N+1):
        for i in range(4):
            for j in range(4):
                for k in range(4):
                    # Iterate through all possible characters to append to the existing string
                    for x in range(4):
                        # Check if the string "AGC" is not present as a substring
                        if x == 0 and j == 1 and k == 2:
                            continue
                        if x == 1 and i == 0 and k == 2:
                            continue
                        if x == 2 and i == 0 and j == 1:
                            continue
                        if x == 0 and i == 1 and k == 2:
                            continue
                        if x == 0 and i == 1 and j == 2:
                            continue
                        
                        # Update the count of valid strings
                        dp[n][j][k][x] += dp[n-1][i][j][k]
                        dp[n][j][k][x] %= 1000000007
                        
    # Sum up the count of valid strings for the last length
    result = 0
    for i in range(4):
        for j in range(4):
            for k in range(4):
                result += dp[N][i][j][k]
                result %= 1000000007
    
    return result


# Read the input from standard input
N = int(sys.stdin.readline().strip())

# Calculate and print the number of valid strings
print(count_valid_strings(N))