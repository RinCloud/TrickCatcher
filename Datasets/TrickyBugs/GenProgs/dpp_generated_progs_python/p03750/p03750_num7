N = int(input())
cards_X = []
for _ in range(N):
    A, B = map(int, input().split())
    cards_X.append((A, B))
cards_Y = list(map(int, input().split()))
Q = int(input())

# pre-process the cards_Y to get the maximum value for each prefix
max_prefix_Y = [0] * (N + 1)
for i in range(1, N + 1):
    max_prefix_Y[i] = max(max_prefix_Y[i - 1], cards_Y[i - 1])

# initialize score to 0
score = 0

for _ in range(Q):
    D, E = map(int, input().split())
    new_card = (D, E)

    # add the new card to cards_X
    cards_X.append(new_card)

    # calculate the maximum possible score
    max_score = 0
    for card_X in cards_X:
        A, B = card_X
        max_score += int(A <= max_prefix_Y[B])

    # output the maximum possible score
    print(max_score)