def max_score(N, cards, Y, Q, rounds):
    max_scores = []
    
    for round in rounds:
        D, E = round
        
        max_score = 0
        
        for i in range(N):
            A, B = cards[i]
            if D > B:
                max_score += 1
            elif D <= A and E >= Y[i]:
                max_score += 1
        
        max_scores.append(max_score)
    
    return max_scores

# Read input
N = int(input())
cards = []
for _ in range(N):
    A, B = map(int, input().split())
    cards.append((A, B))
Y = list(map(int, input().split()))
Q = int(input())
rounds = []
for _ in range(Q):
    D, E = map(int, input().split())
    rounds.append((D, E))

# Calculate and print the maximum possible score for each round
max_scores = max_score(N, cards, Y, Q, rounds)
for score in max_scores:
    print(score)