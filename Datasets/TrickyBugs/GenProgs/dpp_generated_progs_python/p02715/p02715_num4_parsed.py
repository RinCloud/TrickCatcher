import math

def gcd_sum(N, K):
    MOD = int(1e9) + 7
    total_sum = 0
    
    for i in range(1, K+1):
        total_sum += pow(i, N, MOD)
        total_sum %= MOD
        
    return total_sum

# Reading input
N, K = map(int, input().split())

# Computing and printing the result
result = gcd_sum(N, K)
print(result)