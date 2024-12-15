n = int(input())
cards = list(map(int, input().split()))

card_dict = {}

for card in cards:
    if card in card_dict:
        card_dict[card] += 1
    else:
        card_dict[card] = 1

remaining_cards = []

for card, count in card_dict.items():
    if count == 1:
        remaining_cards.append(card)

remaining_card_count = len(remaining_cards)

print(remaining_card_count)