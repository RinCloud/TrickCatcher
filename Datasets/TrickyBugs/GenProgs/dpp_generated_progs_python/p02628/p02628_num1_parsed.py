from itertools import combinations

# Read input
N, K = map(int, input().split())
prices = list(map(int, input().split()))

# Generate all possible combinations of K fruits
combinations = list(combinations(prices, K))

# Calculate the minimum possible total price of fruits
min_price = min(sum(comb) for comb in combinations)

# Print the result
print(min_price)