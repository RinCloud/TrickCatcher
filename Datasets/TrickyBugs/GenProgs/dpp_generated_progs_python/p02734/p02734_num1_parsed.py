'''
Approach:
- We will use dynamic programming to solve this problem.
- Create a 2D dp array where dp[i][j] represents the number of sequences of length i whose sum is j.
- The base case will be when i=0, dp[0][0] = 1, which means there is one sequence of length 0 whose sum is 0.
- For i>0, iterate through each element in the given sequence.
- For each element, iterate from j=0 to S and update dp[i][j] using the recurrence:
  - dp[i][j] = dp[i][j] + dp[i-1][j-A[k]]  if j >= A[k]
  - Here, A[k] is the kth element in the sequence.
- Finally, the answer will be the sum of dp[N][S] for all N and S.

Implementation:
'''
mod = 998244353

def solve(N, S, A):
    dp = [[0] * (S+1) for _ in range(N+1)]
    dp[0][0] = 1

    for i in range(1, N+1):
        for j in range(S+1):
            dp[i][j] = dp[i-1][j]

            if j >= A[i-1]:
                dp[i][j] += dp[i-1][j-A[i-1]]
            
            dp[i][j] %= mod

    result = 0

    for i in range(1, N+1):
        for j in range(1, S+1):
            result += dp[i][j]
            result %= mod

    return result


# Reading input
N, S = map(int, input().strip().split())
A = list(map(int, input().strip().split()))

# Calling the solve function
answer = solve(N, S, A)

# Printing the answer
print(answer)