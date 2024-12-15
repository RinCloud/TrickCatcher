import sys

# Read input from STDIN
input_data = sys.stdin.readlines()

# Extract N and K values
N, K = map(int, input_data[0].split())

# Extract the prices of fruits
prices = list(map(int, input_data[1].split()))

# Sort the prices in ascending order
prices.sort()

# Sum the minimum K prices
total_price = sum(prices[:K])

# Print the output
print(total_price)