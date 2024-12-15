def minimize_difference(N, cards):
    cards.sort()
    sum_snuke = cards[0]
    sum_raccoon = sum(cards[1:])
    min_difference = abs(sum_snuke - sum_raccoon)
    for i in range(1, N-1):
        sum_snuke += cards[i]
        sum_raccoon -= cards[i]
        difference = abs(sum_snuke - sum_raccoon)
        if difference < min_difference:
            min_difference = difference
    return min_difference

N = int(input())
cards = list(map(int, input().split()))

print(minimize_difference(N, cards))