# Taking input for the number of cards
N = int(input())

# Taking input for the values on the cards
cards = list(map(int, input().split()))

# Sorting the cards in descending order
cards.sort(reverse=True)

# Initializing variables for Alice's and Bob's scores
alice_score = 0
bob_score = 0

# Distributing the cards between Alice and Bob
for i in range(N):
    if i % 2 == 0:
        alice_score += cards[i]
    else:
        bob_score += cards[i]

# Calculating the difference between Alice's and Bob's scores
score_difference = alice_score - bob_score

# Printing the result
print(score_difference)