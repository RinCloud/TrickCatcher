N = int(input())
cards = list(map(int, input().split()))

card_count = {}
for card in cards:
    card_count[card] = card_count.get(card, 0) + 1

max_remaining_cards = min(card_count.values()) * 2 + 1
print(max_remaining_cards)