# Program:

def alice_vs_bob(N, cards):
    sorted_cards = sorted(cards, reverse=True)
    alice_score = 0
    bob_score = 0
    
    for i in range(N):
        if i%2 == 0:
            alice_score += sorted_cards[i]
        else:
            bob_score += sorted_cards[i]
    
    return alice_score - bob_score


# Read input from standard input
N = int(input())
cards = list(map(int, input().split()))

# Calculate and print result
result = alice_vs_bob(N, cards)
print(result)