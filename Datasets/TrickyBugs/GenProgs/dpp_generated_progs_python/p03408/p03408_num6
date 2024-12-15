from collections import Counter

# Read input
N = int(input())
blue_cards = [input() for _ in range(N)]
M = int(input())
red_cards = [input() for _ in range(M)]

# Count occurrences of each string
blue_counts = Counter(blue_cards)
red_counts = Counter(red_cards)

# Calculate the maximum balance
max_balance = 0
for card in blue_counts:
    max_balance = max(max_balance, blue_counts[card] - red_counts[card])

# Print the maximum balance
print(max_balance)