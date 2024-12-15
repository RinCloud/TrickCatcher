n = int(input())
cards = list(map(int, input().split()))

cards.sort()

snuke_cards = cards[:n//2]
raccoon_cards = cards[n//2:]

snuke_sum = sum(snuke_cards)
raccoon_sum = sum(raccoon_cards)

min_diff = abs(snuke_sum - raccoon_sum)

print(min_diff)