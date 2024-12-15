from heapq import heapify, heappop, heappush

def solve(N, cards, deck_Y, Q, rounds):
    X = []  # list of (A, B) pairs
    Z = []  # list of (D, E) pairs
    for i in range(N):
        X.append(cards[i])
    
    deck_Y.sort()  # sort the Y deck in ascending order
    
    result = []
    for i in range(Q):
        D, E = rounds[i]
        heappush(Z, (D, E))
        max_score = 0
        front_used = set()
        
        while Z and deck_Y:
            D, E = heappop(Z)
            
            left, right = deck_Y[0], deck_Y[-1]
            if D <= left:  # try to match with the smallest number in Y
                card = (D, left)
                deck_Y.pop(0)
            elif D <= right:  # try to match with the largest number in Y
                card = (D, right)
                deck_Y.pop()
            else:
                break
            
            if card not in front_used:
                front_used.add(card)
                max_score += 1
        
        result.append(max_score)
    
    return result


N = int(input())
cards = []
for _ in range(N):
    A, B = map(int, input().split())
    cards.append((A, B))
    
deck_Y = list(map(int, input().split()))
Q = int(input())
rounds = []
for _ in range(Q):
    D, E = map(int, input().split())
    rounds.append((D, E))
    
result = solve(N, cards, deck_Y, Q, rounds)
for score in result:
    print(score)