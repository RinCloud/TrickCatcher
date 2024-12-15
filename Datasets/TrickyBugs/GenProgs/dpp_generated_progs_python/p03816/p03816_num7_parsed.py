n = int(input())
cards = list(map(int, input().split()))

count = {}
for card in cards:
    count[card] = count.get(card, 0) + 1

max_count = max(count.values())
distinct_count = len(count)

remaining_cards = n - max_count - distinct_count
if max_count % 2 == 1:
    remaining_cards += 1

print(remaining_cards)