import itertools

def num_card_selections(N, A, cards):
    count = 0
    for r in range(1, N+1):
        for combination in itertools.combinations(cards, r):
            if sum(combination) / len(combination) == A:
                count += 1
    return count

N, A = map(int, input().split())
cards = list(map(int, input().split()))

result = num_card_selections(N, A, cards)
print(result)