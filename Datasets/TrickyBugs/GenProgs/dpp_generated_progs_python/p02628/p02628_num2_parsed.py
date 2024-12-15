# Get the input values
N, K = map(int, input().split())
prices = list(map(int, input().split()))

# Sort the prices in ascending order
prices.sort()

# Calculate the minimum possible total price
min_total_price = sum(prices[:K])

# Print the result
print(min_total_price)