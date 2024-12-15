from itertools import combinations

# Get the number of kinds of fruits and the number of fruits to choose
N, K = map(int, input().split())

# Get the prices of the fruits
prices = list(map(int, input().split()))

# Find all possible combinations of fruits
combinations = list(combinations(prices, K))

# Calculate the minimum possible total price
min_price = min(sum(c) for c in combinations)

# Print the minimum possible total price
print(min_price)