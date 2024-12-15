# Helper function to calculate the maximum score for each round
def calculate_max_score(N, cards_X, cards_Y, Q, D, E):
    # Sort the cards_X in descending order based on the larger number on the front side
    cards_X.sort(reverse=True)

    max_scores = []
    for i in range(Q):
        d = D[i]
        e = E[i]

        # Initialize the score for the current round
        round_score = 0

        # Check if it is impossible to satisfy the condition for any pair
        if cards_X[N-1] > e:
            max_scores.append(-1)
            continue

        # Iterate over the cards_X from largest to smallest
        for j in range(N):
            if j >= N-1:
                # If we are on the last card, use the larger number on the front side
                if d <= cards_X[j]:
                    round_score += 1
                    break
            else:
                # If the current card has a smaller number on the front side than e, use it
                if cards_X[j] <= e:
                    round_score += 1
                    break
                # If the current card has a larger number on the back side than d, use it and continue
                elif cards_X[j] >= d:
                    round_score += 1
                    break

        max_scores.append(round_score)

    return max_scores


# Read input
N = int(input())
cards_X = []
for i in range(N):
    a, b = map(int, input().split())
    cards_X.append(max(a, b))

cards_Y = list(map(int, input().split()))

Q = int(input())
D = []
E = []
for i in range(Q):
    d, e = map(int, input().split())
    D.append(d)
    E.append(e)

# Calculate and print the maximum scores for each round
max_scores = calculate_max_score(N, cards_X, cards_Y, Q, D, E)
for score in max_scores:
    print(score)