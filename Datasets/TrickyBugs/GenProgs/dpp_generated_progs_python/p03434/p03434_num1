def calculate_score_difference(N, cards):
    cards.sort(reverse=True)
    alice_score = 0
    bob_score = 0

    for i in range(N):
        if i % 2 == 0:
            alice_score += cards[i]
        else:
            bob_score += cards[i]

    score_difference = alice_score - bob_score
    return score_difference

N = int(input())
cards = list(map(int, input().split()))

result = calculate_score_difference(N, cards)
print(result)