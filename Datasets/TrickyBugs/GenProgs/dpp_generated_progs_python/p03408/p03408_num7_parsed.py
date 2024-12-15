# Reading inputs
N = int(input())
blue_cards = [input() for _ in range(N)]
M = int(input())
red_cards = [input() for _ in range(M)]

# Counting the occurrences of each string in blue and red cards
blue_count = {x: blue_cards.count(x) for x in set(blue_cards)}
red_count = {x: red_cards.count(x) for x in set(red_cards)}

# Calculating the maximum balance
max_balance = 0
for string, count in blue_count.items():
    balance = count - red_count.get(string, 0)
    max_balance = max(max_balance, balance)

# Printing the maximum balance
print(max_balance)