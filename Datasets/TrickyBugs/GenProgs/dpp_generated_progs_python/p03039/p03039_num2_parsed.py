import math

def cost_of_arrangements(N, M, K):
    MOD = 10**9 + 7
    
    # Calculate binomial coefficient
    def choose(n, k):
        res = 1
        for i in range(k):
            res = res * (n - i) % MOD
            res = res * pow(i + 1, MOD - 2, MOD) % MOD
        return res
    
    # Compute the sum of costs for all possible x values
    def compute_cost_x(n, m, k):
        res = 0
        for i in range(1, n + 1):
            res += i * (n - i) * m * m // 2 * choose(n * m - 2, k - 2)
            res %= MOD
        return res
    
    # Compute the sum of costs for all possible y values
    def compute_cost_y(n, m, k):
        res = 0
        for i in range(1, m + 1):
            res += i * (m - i) * n * n // 2 * choose(n * m - 2, k - 2)
            res %= MOD
        return res
    
    # Compute the sum of costs for all combinations of x and y values
    def compute_cost(n, m, k):
        res = 0
        res += compute_cost_x(n, m, k)
        res += compute_cost_y(n, m, k)
        return res % MOD

    return compute_cost(N, M, K)

# Read inputs
N, M, K = map(int, input().split())

# Compute and print the cost of arrangements
print(cost_of_arrangements(N, M, K))