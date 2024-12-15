from collections import Counter

# Read input
N = int(input())
blue_cards = [input() for _ in range(N)]
M = int(input())
red_cards = [input() for _ in range(M)]

# Count the occurrences of each string in blue and red cards
blue_counts = Counter(blue_cards)
red_counts = Counter(red_cards)

# Calculate the maximum balance
max_balance = 0
for s in blue_counts.keys():
    balance = blue_counts[s] - red_counts.get(s, 0)
    max_balance = max(max_balance, balance)

# Print the maximum balance
print(max_balance)