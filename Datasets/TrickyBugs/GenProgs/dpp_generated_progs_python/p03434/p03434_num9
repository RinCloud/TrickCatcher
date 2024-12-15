# Program

def max_score_difference(N, cards):
    sorted_cards = sorted(cards, reverse=True)
    alice_score = sum(sorted_cards[::2])
    bob_score = sum(sorted_cards[1::2])
    return alice_score - bob_score

N = int(input())
cards = list(map(int, input().split()))

result = max_score_difference(N, cards)
print(result)