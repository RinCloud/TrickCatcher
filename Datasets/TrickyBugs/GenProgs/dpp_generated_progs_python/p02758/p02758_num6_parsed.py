# Plan:
1. Sort the robots based on their coordinate (`X_i`).
2. Create an array/list (`dp`) of size N, initialized with 0. dp[i] represents the number of possible sets of robots remaining on the number line after considering the first i robots.
3. Initialize dp[0] = 1 (since there is always at least one set with the first robot).
4. Iterate over the robots from the second one (i = 1 to N-1).
5. For each robot i, iterate from j = i-1 to 0 (in reverse order).
6. If robot j overlaps with robot i, add dp[j] to dp[i]. If robot j does not overlap with robot i, break the loop.
7. Finally, return the sum of all elements in dp modulo 998244353.