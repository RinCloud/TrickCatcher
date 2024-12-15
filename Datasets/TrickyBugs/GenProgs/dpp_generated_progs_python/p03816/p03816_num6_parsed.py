N = int(input())
cards = list(map(int, input().split()))

freq = {}
for card in cards:
    if card in freq:
        freq[card] += 1
    else:
        freq[card] = 1

max_freq = max(freq.values())
remaining_cards = N - max_freq

print(remaining_cards)