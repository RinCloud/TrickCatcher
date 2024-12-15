from math import gcd

def calculate_gcd_sum(N, K):
    mod = int(1e9+7)
    total_sum = 0
    
    for i in range(1, K+1):
        count = pow(K // i, N, mod) - pow(K // (i + 1), N, mod)
        total_sum = (total_sum + count * i) % mod
        
    return total_sum

# Reading input values
N, K = map(int, input().split())

# Calculating the sum of GCD
result = calculate_gcd_sum(N, K)

# Printing the result
print(result)