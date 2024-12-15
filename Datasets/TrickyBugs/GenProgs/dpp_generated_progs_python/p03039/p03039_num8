MOD = 10**9+7

def sum_of_costs(N, M, K):
    factorial = [0]*(N*M+1)
    factorial[0] = 1
    for i in range(1, N*M+1):
        factorial[i] = (factorial[i-1] * i) % MOD
    
    inverse_factorial = [0]*(N*M+1)
    inverse_factorial[N*M] = pow(factorial[N*M], MOD-2, MOD)
    for i in range(N*M-1, -1, -1):
        inverse_factorial[i] = (inverse_factorial[i+1] * (i+1)) % MOD
    
    def nCr(n, r):
        return factorial[n] * inverse_factorial[r] % MOD * inverse_factorial[n-r] % MOD
    
    answer = 0
    for i in range(1, N+1):
        for j in range(1, M+1):
            if i*j-1 >= K:
                answer += i*(i-1)//2 * nCr(i*j-2, K-2) * j
                answer %= MOD
                
    return answer

# Read input
N, M, K = map(int, input().split())

# Calculate and print the sum of costs of all possible arrangements
print(sum_of_costs(N, M, K))