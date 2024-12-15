# Approach:
* We need to find the number of ways to throw K balls such that all the chameleons are red after throwing.
* Initially, all chameleons are blue.
* We can throw either a red ball or a blue ball in each throw.
* So, we need to consider all possible combinations of red and blue balls that are thrown.
* We can use dynamic programming to solve this problem.
* Let dp[i] represent the number of ways to throw i balls such that all chameleons are red.
* For i = 0, dp[0] = 1, as all chameleons are already red. (base case)
* For i = 1 to K, we can calculate dp[i] using the formula: dp[i] = dp[i-1] * (2^N - 1), where N is the number of chameleons.
  - dp[i-1] represents the number of ways to throw (i-1) balls such that all chameleons are red.
  - (2^N - 1) represents the number of ways to choose either a red ball or a blue ball in each throw.
* Finally, we need to print dp[K] modulo 998244353, as mentioned in the problem statement.

# Program:

MOD = 998244353

def count_ways(N, K):
    dp = [0] * (K+1)
    dp[0] = 1
    
    for i in range(1, K+1):
        dp[i] = dp[i-1] * pow(2, N, MOD) % MOD
    
    return dp[K]

N, K = map(int, input().split())
result = count_ways(N, K)
print(result)