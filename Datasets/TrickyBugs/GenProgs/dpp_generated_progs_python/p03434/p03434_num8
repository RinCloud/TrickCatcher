# Program

def calculate_score_difference(N, cards):
    cards.sort(reverse=True)   # Sort the cards in descending order
    
    alice_score = 0
    bob_score = 0
    
    for i in range(N):
        if i % 2 == 0:
            alice_score += cards[i]
        else:
            bob_score += cards[i]
    
    return alice_score - bob_score


# Read N
N = int(input())

# Read the cards
cards = list(map(int, input().split()))

# Calculate the score difference
score_difference = calculate_score_difference(N, cards)

# Print the score difference
print(score_difference)