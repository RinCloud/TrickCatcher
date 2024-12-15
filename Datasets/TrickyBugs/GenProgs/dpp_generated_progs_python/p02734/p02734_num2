# Given a sequence of N integers A_1, A_2, ..., A_N and a positive integer S,
# we need to find the sum of f(L, R) over all pairs of integers (L, R) such that 1 <= L <= R <= N,
# where f(L, R) is the number of sequences of integers (x_1, x_2, ..., x_k) such that L <= x_1 < x_2 < ... < x_k <= R
# and A_{x_1} + A_{x_2} + ... + A_{x_k} = S.

# Let's initialize a 2D array dp of size (N+1) x (S+1) with all values as 0.
# dp[i][j] will represent the number of sequences of length i that sum up to j.

# We'll use dynamic programming to fill the dp array.
# For each element A_i in the sequence, we'll update the dp array to count the number of sequences that sum up to j.
# The value of dp[i][j] will be the sum of dp[i-1][j-k] for all possible k values such that A_i = k.

# Finally, we need to find the sum of all elements in the last row of the dp array, i.e., dp[N][j] for j = 1 to S,
# and print the result modulo 998244353.

N, S = map(int, input().split())
A = list(map(int, input().split()))
MOD = 998244353

dp = [[0] * (S+1) for _ in range(N+1)]
dp[0][0] = 1

for i, a in enumerate(A, start=1):
    for j in range(S+1):
        dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD
        if j >= a:
            dp[i][j] = (dp[i][j] + dp[i-1][j-a]) % MOD

result = sum(dp[N]) % MOD
print(result)