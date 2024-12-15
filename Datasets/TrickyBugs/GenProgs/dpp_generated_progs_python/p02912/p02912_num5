# Taking inputs
N, M = map(int, input().split())
prices = list(map(int, input().split()))

# Sorting the prices list in ascending order
prices.sort()

# Determining the minimum amount of money required to buy all the items
total_cost = sum(prices)
for i in range(M):
    if prices:
        prices[-1] //= 2
        prices.sort()
        total_cost -= prices.pop()

# Printing the minimum amount of money required
print(total_cost)