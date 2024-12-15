N = int(input())
blue_cards = [input() for _ in range(N)]
M = int(input())
red_cards = [input() for _ in range(M)]

max_balance = 0
for card in set(blue_cards):
    balance = blue_cards.count(card) - red_cards.count(card)
    max_balance = max(max_balance, balance)

print(max_balance)