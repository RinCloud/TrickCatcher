# Plan
* I will be using Dynamic Programming to solve this problem.
* Each testcase consists of a number N and 4 coefficients A, B, C, D.
* The minimum number of coins required to reach N can be calculated using the following recurrence relation:
  * dp[i] = min(dp[i-1] + D, dp[i//2] + A, dp[i//3] + B, dp[i//5] + C)
* We initialize dp[0] = 0 and then calculate dp[i] for i from 1 to N using the recurrence relation.
* Finally, the answer for each testcase will be dp[N].
* I will implement this logic in the program