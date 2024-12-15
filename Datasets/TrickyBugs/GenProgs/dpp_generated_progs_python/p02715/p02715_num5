import math

def gcd_sum(N, K):
    MOD = 10**9 + 7
    total_sum = 0
    
    for i in range(1, K+1):
        total_sum = (total_sum + pow(i, N, MOD)) % MOD
    
    return total_sum

N, K = map(int, input().split())
result = gcd_sum(N, K)
print(result)