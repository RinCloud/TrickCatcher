# Takahashi Tower Painting

def count_ways(N, A, B, K):
    MOD = 998244353
    dp = [0] * (K+1)
    dp[0] = 1
    
    for i in range(1, K+1):
        if i-A >= 0:
            dp[i] += dp[i-A]
        if i-B >= 0:
            dp[i] += dp[i-B]
        dp[i] %= MOD
    
    count = 0
    for i in range(K-A+1):
        count += dp[i] * dp[K-A-i]
        count %= MOD
    
    return count

# Getting input from user
N, A, B, K = map(int, input().split())

# Calling the function and printing the output
print(count_ways(N, A, B, K))