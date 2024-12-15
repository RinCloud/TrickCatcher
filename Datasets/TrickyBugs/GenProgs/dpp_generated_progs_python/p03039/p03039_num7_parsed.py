# I'm going to use combinatorics to solve this problem by calculating the sum of the costs for all possible combinations of squares to place the pieces on.
# The combination formula I'm going to use is (n choose k), which calculates the number of ways to choose k items from a set of n items.
# Let's write the program:

def compute_modulo(n, m, k):
    MOD = 10**9+7
    
    # Helper function to calculate factorial
    def factorial(num):
        fact = 1
        for i in range(1, num + 1):
            fact = (fact * i) % MOD
        return fact
    
    # Calculates the combinatorial coefficient (n choose k)
    def combinations(n, k):
        numerator = factorial(n)
        denominator = (factorial(k) * factorial(n - k)) % MOD
        return (numerator * pow(denominator, MOD - 2, MOD)) % MOD
    
    # Calculates the sum of the costs for all possible combinations
    def sum_of_costs(n, m, k):
        sum_costs = 0
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                # For each square, calculate the number of combinations to choose k pieces and add the cost to the sum
                cost = ((i - 1) * (n - i + 1) * m + (j - 1) * (m - j + 1) * n) % MOD
                sum_costs = (sum_costs + cost * combinations(n * m - 1, k - 1)) % MOD
        return sum_costs
    
    return sum_of_costs(n, m, k)

# Read input from stdin
n, m, k = map(int, input().split())

# Compute the sum of the costs and print the result
print(compute_modulo(n, m, k))