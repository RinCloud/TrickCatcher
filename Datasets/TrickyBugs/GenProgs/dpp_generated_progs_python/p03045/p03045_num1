from collections import defaultdict

def determine_cards(N, M, pairs):
    cost = 0
    cards = [0] * N
    even_pairs = defaultdict(list)
    
    for i in range(M):
        X, Y, Z = pairs[i]
        if (cards[X-1] == 0 and cards[Y-1] == 0):
            cost += 1
            cards[X-1] = 1
            cards[Y-1] = Z % 2 + 1
        elif cards[X-1] == 0:
            cards[X-1] = cards[Y-1] % 2 + 1
        elif cards[Y-1] == 0:
            cards[Y-1] = cards[X-1] % 2 + 1
        else:
            if (cards[X-1] + cards[Y-1] + Z) % 2 != 0:
                return 'IMPOSSIBLE'
    
    for i in range(N):
        even_pairs[cards[i]].append(i)
        
    while True:
        num_even = len(even_pairs[1])
        num_odd = len(even_pairs[2])
        
        if num_even == 0 or num_odd == 0:
            break
        
        cost += 1
        even_card = 1 if num_even < num_odd else 2
        odd_card = 2 if even_card == 1 else 1
        
        for i in range(1, N+1):
            if cards[i-1] == even_card:
                even_pairs[even_card].remove(i-1)
                cards[i-1] = odd_card
                even_pairs[odd_card].append(i-1)
                break
    
    return cost

# Read input
N, M = map(int, input().split())
pairs = []
for _ in range(M):
    X, Y, Z = map(int, input().split())
    pairs.append((X, Y, Z))
    
# Call the function and print the result
print(determine_cards(N, M, pairs))