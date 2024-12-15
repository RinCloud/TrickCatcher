# Taking input from user
N = int(input())
blue_cards = []
for _ in range(N):
    blue_cards.append(input())
M = int(input())
red_cards = []
for _ in range(M):
    red_cards.append(input())

# Counting occurrences of each string in blue cards
blue_counts = {}
for card in blue_cards:
    if card in blue_counts:
        blue_counts[card] += 1
    else:
        blue_counts[card] = 1

# Counting occurrences of each string in red cards
red_counts = {}
for card in red_cards:
    if card in red_counts:
        red_counts[card] += 1
    else:
        red_counts[card] = 1

# Calculating maximum earning on balance
max_earning = 0
for card, count in blue_counts.items():
    if card in red_counts:
        max_earning = max(max_earning, count - red_counts[card])
    else:
        max_earning = max(max_earning, count)

# Printing the maximum earning
print(max_earning)