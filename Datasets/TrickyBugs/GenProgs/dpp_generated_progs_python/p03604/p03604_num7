'''
We can solve this problem using combinatorics and dynamic programming.

First, we need to read the input and store the coordinates of the balls.

Next, we need to sort the balls in increasing order of their x-coordinate (x_i). This is because the type-A robots move on the x-axis and need to collect the balls in ascending order of x-coordinate.

After that, we can define a 2D array dp of size (N+1) x (N+1) and initialize it with 0. dp[i][j] will represent the number of ways to activate the first i type-A robots and the first j type-B robots such that all the balls can be collected.

We can fill the dp array using the following recurrence relation:

dp[i][j] = dp[i-1][j] + dp[i][j-1]

This means that to compute dp[i][j], we can either activate the (i-1)th type-A robot before activating the ith type-A robot (which leaves the jth type-B robot to be activated next) or activate the (j-1)th type-B robot before activating the jth type-B robot (which leaves the ith type-A robot to be activated next).

Finally, we can print dp[N][N] as the result modulo 10^9+7, which represents the number of ways to activate all the robots such that all the balls can be collected.

'''

MOD = 10**9 + 7

def collect_balls(N, balls):
    balls.sort(key=lambda x: x[0]) # Sort the balls by x-coordinate

    dp = [[0] * (N+1) for _ in range(N+1)] # Initialize dp array

    dp[0][0] = 1 # Base case

    for i in range(N+1):
        for j in range(N+1):
            if i > 0:
                dp[i][j] += dp[i-1][j] # Compute dp[i][j] by considering type-A robot
            if j > 0:
                dp[i][j] += dp[i][j-1] # Compute dp[i][j] by considering type-B robot
            dp[i][j] %= MOD # Take modulo to avoid overflow

    return dp[N][N]