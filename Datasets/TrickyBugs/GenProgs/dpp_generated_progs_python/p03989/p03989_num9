import numpy as np

def count_permutations(N, K):
    # calculate factorial modulo 924844033
    mod = 924844033
    factorial = [1]
    for i in range(1, N+1):
        factorial.append((factorial[i-1]*i) % mod)
    
    # create a DP array
    dp = np.zeros((N+1, N+1), dtype=int)
    dp[0][0] = 1
    
    # fill the DP array
    for i in range(1, N+1):
        for j in range(i+1):
            if j == 0:
                dp[i][j] = dp[i-1][j+1]
            elif j == i:
                dp[i][j] = dp[i-1][j-1]
            else:
                dp[i][j] = (dp[i-1][j]*j + dp[i-1][j+1]*(i-j)) % mod
    
    answer = 0
    for j in range(N):
        answer = (answer + dp[N][j]*factorial[j]) % mod
    
    return answer

# read input
N, K = map(int, input().split())

# calculate and print the answer
print(count_permutations(N, K))