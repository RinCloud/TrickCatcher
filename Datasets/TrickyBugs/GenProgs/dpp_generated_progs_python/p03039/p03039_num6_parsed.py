MOD = 10**9 + 7

def calculate_cost(n, m, k):
    factorial = [1]
    for i in range(1, n*m+1):
        factorial.append(factorial[-1] * i % MOD)
    
    def inverse(x):
        return pow(x, MOD-2, MOD)
    
    def combination(n, k):
        return factorial[n] * inverse(factorial[k]) % MOD * inverse(factorial[n-k]) % MOD
    
    if k == 1:
        return 0
    
    result = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            result = (result + (combination(n*m-2, k-2) * (i-1) * (n-i) * m * m % MOD)) % MOD
            result = (result + (combination(n*m-2, k-2) * (j-1) * (m-j) * n * n % MOD)) % MOD
    
    return result

# Read the input
n, m, k = map(int, input().split())

# Calculate the sum of the costs
cost = calculate_cost(n, m, k)

# Print the result
print(cost)