import math

def solve(N, Ma, Mb, chemicals):
  # initialize the dp table with large values
  INF = float('inf')
  dp = [[[INF] * (400 + 1) for _ in range(400 + 1)] for _ in range(N + 1)]
  
  dp[0][0] = [0] * (400 + 1)
  
  # iterate through the chemicals
  for i in range(1, N + 1):
    a, b, c = chemicals[i - 1]
    # iterate through the possible amount of substance A and B
    for na in range(400 + 1):
      for nb in range(400 + 1):
        if dp[i - 1][na][nb] == INF:
          continue
        # update the dp table
        dp[i][na][nb] = min(dp[i][na][nb], dp[i - 1][na][nb])
        dp[i][na + a][nb + b] = min(dp[i][na + a][nb + b], dp[i - 1][na][nb] + c)
  
  ans = INF
  
  # iterate through the possible amount of substance A and B
  for na in range(1, 400 + 1):
    for nb in range(1, 400 + 1):
      if na * Mb == nb * Ma:
        ans = min(ans, dp[N][na][nb])
  
  if ans == INF:
    return -1
  
  return ans

# Read input
N, Ma, Mb = map(int, input().split())
chemicals = []
for _ in range(N):
    a, b, c = map(int, input().split())
    chemicals.append((a, b, c))

# Call solve function and print the result
print(solve(N, Ma, Mb, chemicals))