# function to find the score difference between Alice and Bob
def find_score_difference(N, cards):
    # sort the cards in descending order
    cards.sort(reverse=True)
    
    alice_score = 0
    bob_score = 0
    
    for i in range(N):
        # Alice's turn
        if i % 2 == 0:
            alice_score += cards[i]
        # Bob's turn
        else:
            bob_score += cards[i]
            
    return alice_score - bob_score


# read input values
N = int(input())
cards = list(map(int, input().split()))

# find the score difference and print the result
print(find_score_difference(N, cards))