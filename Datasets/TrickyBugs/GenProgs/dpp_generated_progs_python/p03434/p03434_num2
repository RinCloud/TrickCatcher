from typing import List

def alice_bob_score_difference(N: int, cards: List[int]) -> int:
    cards.sort(reverse=True)  # Sorting cards in descending order
    
    alice_score = 0
    bob_score = 0
    
    for i in range(N):
        if i % 2 == 0:
            alice_score += cards[i]  # Alice takes a card
        else:
            bob_score += cards[i]  # Bob takes a card
            
    return alice_score - bob_score

# Reading input
N = int(input())
cards = list(map(int, input().split()))

# Calculating and printing Alice's score minus Bob's score
print(alice_bob_score_difference(N, cards))