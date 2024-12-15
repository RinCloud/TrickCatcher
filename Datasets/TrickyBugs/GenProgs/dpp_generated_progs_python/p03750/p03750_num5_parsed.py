from collections import defaultdict

def find_maximum_score(N, cards, deck, Q, new_cards):
    # Create a dictionary to store the maximum score for each round
    scores = {}

    # Create a dictionary to store the count of each card in deck X
    card_count = defaultdict(int)

    # Initialize the count of each card in deck X
    for card in cards:
        card_count[card] += 1

    # Iterate through each new card
    for i in range(Q):
        front = new_cards[i][0]
        back = new_cards[i][1]

        # Update the count of each card in deck Z
        card_count[front] += 1

        # Initialize the maximum score for the round
        max_score = 0

        # Iterate through each card in deck Y
        for card in deck:
            # Check if the condition is satisfied
            if card <= back:
                # Update the maximum score if necessary
                max_score = max(max_score, card_count[front])

        # Store the maximum score for the round
        scores[i + 1] = max_score

    # Return the maximum score for each round
    return scores

# Read the input
N = int(input())
cards = [tuple(map(int, input().split())) for _ in range(N)]
deck = list(map(int, input().split()))
Q = int(input())
new_cards = [tuple(map(int, input().split())) for _ in range(Q)]

# Find the maximum score for each round
scores = find_maximum_score(N, cards, deck, Q, new_cards)

# Print the maximum score for each round
for i in range(1, Q + 1):
    print(scores[i])