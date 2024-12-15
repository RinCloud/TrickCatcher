N = int(input())
cards = list(map(int, input().split()))

cards.sort()

Snuke_cards = [cards[0]]
Raccoon_cards = cards[1:]

for i in range(1, N-1):
    if sum(Snuke_cards) >= sum(Raccoon_cards):
        break
    Snuke_cards.append(Raccoon_cards.pop())

total_Snuke = sum(Snuke_cards)
total_Raccoon = sum(Raccoon_cards)

print(abs(total_Snuke - total_Raccoon))