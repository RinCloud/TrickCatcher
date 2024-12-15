# importing the necessary libraries
import numpy as np

# function to solve the problem
def knapsack(N, W, weights, values):
    # creating a 2D array for memoization
    dp = np.zeros((N + 1, W + 1), dtype=int)
    
    # loop to fill the dp array
    for i in range(1, N + 1):
        for j in range(1, W + 1):
            # checking if the weight of the current item is less than or equal to the current weight
            if weights[i] <= j:
                # taking the maximum value between selecting the current item or not selecting it
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weights[i]] + values[i])
            else:
                # if the weight of the current item is greater than the current weight, not selecting it
                dp[i][j] = dp[i-1][j]
    
    # returning the maximum total value of the selected items
    return dp[N][W]

# getting input
N, W = map(int, input().split())
weights = [0]
values = [0]

# looping over the items
for i in range(N):
    w, v = map(int, input().split())
    weights.append(w)
    values.append(v)

# calling the knapsack function to get the maximum total value
max_value = knapsack(N, W, weights, values)

# printing the maximum total value
print(max_value)