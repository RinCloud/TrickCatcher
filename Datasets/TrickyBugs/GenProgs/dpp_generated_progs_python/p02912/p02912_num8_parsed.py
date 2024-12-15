# Takahashi is going to buy N items one by one.
# The price of the i-th item he buys is A_i yen (the currency of Japan).
# He has M discount tickets, and he can use any number of them when buying an item.
# If Y tickets are used when buying an item priced X yen, he can get the item for \frac{X}{2^Y} (rounded down to the nearest integer) yen.
# What is the minimum amount of money required to buy all the items?

# Read the input values
N, M = map(int, input().split())
items = list(map(int, input().split()))

# Sort the items in increasing order of price
items.sort()

# Calculate the minimum amount of money required
total_cost = sum(items)
for i in range(M):
    if items[-1] >= total_cost:
        break
    total_cost -= items.pop() // 2

# Print the minimum amount of money required
print(total_cost)