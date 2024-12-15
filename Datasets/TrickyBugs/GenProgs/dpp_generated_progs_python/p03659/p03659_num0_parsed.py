# Snuke and Raccoon - Minimum Difference

# Read the input N
N = int(input())

# Read the list of integers
cards = list(map(int, input().split()))

# Sort the cards in ascending order
cards.sort()

# Calculate the total sum of cards
total_sum = sum(cards)

# Initialize the minimum difference as infinity
min_difference = float('inf')

# Iterate over possible positions to split the cards
for i in range(1, N):
    snuke_sum = sum(cards[:i])
    raccoon_sum = total_sum - snuke_sum
    difference = abs(snuke_sum - raccoon_sum)
    min_difference = min(min_difference, difference)

# Print the minimum difference
print(min_difference)