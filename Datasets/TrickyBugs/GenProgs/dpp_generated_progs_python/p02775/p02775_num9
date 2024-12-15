import math

n = int(input())

# Function to calculate the number of digits in a number
def num_digits(num):
    return math.floor(math.log10(num)) + 1

# Function to calculate the minimum number of banknotes required
def min_banknotes(n):
    banknotes = []
    for i in range(100):
        banknotes.append(10 ** i)
    
    # Initialize the table to store the minimum number of banknotes required for each amount
    dp = [float('inf')] * (n + 1)
    dp[0] = 0
    
    # Calculate the minimum number of banknotes required for each amount
    for i in range(1, n + 1):
        for j in range(len(banknotes)):
            if i >= banknotes[j]:
                dp[i] = min(dp[i], dp[i - banknotes[j]] + 1)
            else:
                break
    
    return dp[n]

# Calculate and print the minimum number of banknotes required
print(min_banknotes(n))