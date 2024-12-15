import sys

def minimize_difference(N, cards):
    cards.sort()
    min_difference = sys.maxsize
    for i in range(1, N):
        snuke_cards = cards[:i]
        raccoon_cards = cards[i:]
        snuke_sum = sum(snuke_cards)
        raccoon_sum = sum(raccoon_cards)
        difference = abs(snuke_sum - raccoon_sum)
        if difference < min_difference:
            min_difference = difference
    return min_difference

N = int(input())
cards = list(map(int, input().split()))

min_difference = minimize_difference(N, cards)
print(min_difference)