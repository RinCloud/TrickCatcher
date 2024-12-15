# Plan
- Paint all black cells in all K columns.
- Use the dynamic programming approach to find the minimum number of operations required to paint the remaining cells.

# Dry Run
## Input
  N = 4
  K = 1
  H = [2, 3, 4, 1]
## Output
  Result = 3
## Execution
- Paint all black cells in column 1 and keep the rest white.
- Initialize DP table with size (N+1)x(N-K+1).
- Fill the first column of the DP table with the corresponding H values.
  - dp[0][1] = 0
  - dp[1][1] = 2
  - dp[2][1] = 3
  - dp[3][1] = 4
  - dp[4][1] = 1
- Calculate the minimum number of operations required to paint the remaining cells.
- Iterate over y from 2 to N-K (exclusive), and x from 1 to N.
  - Iterate over i from 1 to x (exclusive).
    - dp[x][y] = min(dp[x][y], dp[i][y-1] + max(0, H[x] - H[i]))
  - After the first round, the dp table looks as follows:
    - dp:
      - [ 0, 0, 0, 0],
      - [ 2, 0, 0, 0],
      - [ 3, 0, 0, 0],
      - [ 4, 0, 0, 0],
      - [ 0, 0, 0, 0]
  - After the second round, the dp table looks as follows:
    - dp:
      - [ 0, 0, 0, 0],
      - [ 2, 0, 0, 0],
      - [ 3, 0, 0, 0],
      - [ 3, 0, 0, 0],
      - [ 0, 0, 0, 0]
  - After the third round, the dp table looks as follows:
    - dp:
      - [ 0, 0, 0, 0],
      - [ 2, 0, 0, 0],
      - [ 3, 0, 0, 0],
      - [ 3, 0, 0, 0],
      - [ 0, 0, 0, 0]
- Calculate the minimum number of operations required.
  - Iterate over i from 1 to N (inclusive).
    - ans = min(ans, dp[i][N-K])
- Print the result which is equal to ans (3).