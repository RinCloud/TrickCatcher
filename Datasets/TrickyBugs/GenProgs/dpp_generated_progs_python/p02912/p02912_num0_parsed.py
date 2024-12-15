import heapq

N, M = map(int, input().split())
A = list(map(int, input().split()))

# Sort the prices in ascending order
A.sort()

# Use a min heap to store the discounts
discounts = []
heapq.heapify(discounts)

# Iterate over the prices with the highest discounts
for price in A:
    # Add the price to the total amount of money required
    total += price

    # Apply the discounts from the discount tickets
    for _ in range(min(M, price.bit_length() - 1)):
        heapq.heappush(discounts, -price)

        # Take the greatest discount from the heap
        greatest_discount = heapq.heappop(discounts)

        # Update the total amount of money required
        total += greatest_discount // 2

# Print the minimum amount of money required to buy all the items
print(total)