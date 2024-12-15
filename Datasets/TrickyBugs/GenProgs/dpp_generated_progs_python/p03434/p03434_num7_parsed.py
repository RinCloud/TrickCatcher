# Program to calculate Alice's score minus Bob's score in the game using N cards

# Read input from standard input
N = int(input())
cards = list(map(int, input().split()))

# Sort the cards in descending order
cards.sort(reverse=True)

# Initialize Alice and Bob's scores
alice_score = 0
bob_score = 0

# Alternate turns between Alice and Bob
for i in range(N):
    if i % 2 == 0:
        alice_score += cards[i]
    else:
        bob_score += cards[i]

# Calculate the difference between Alice's score and Bob's score
score_difference = alice_score - bob_score

# Print the result
print(score_difference)