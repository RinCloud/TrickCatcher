# Program:

from collections import Counter

def max_points(N, cards):
    freq = Counter(cards)
    max_points = 0
    
    for i in range(1, N+1):
        for j in range(1, N+1):
            for k in range(1, N+1):
                if i != j and j != k and i != k:
                    temp_cards = cards.copy()
                    points = 0
                    
                    # Rearranging and removing cards
                    for _ in range(N-1):
                        temp_cards.remove(i)
                        temp_cards.remove(j)
                        temp_cards.remove(k)
                        
                        # Check if the removed cards are equal
                        if temp_cards[0] == temp_cards[1] == temp_cards[2]:
                            points += 1
                            
                        temp_cards = temp_cards[3:]
                    
                    # Check if the remaining three cards are equal
                    if temp_cards[0] == temp_cards[1] == temp_cards[2]:
                        points += 1
                    
                    max_points = max(max_points, points)
    
    return max_points

# Reading input
N = int(input())
cards = list(map(int, input().split()))

# Calculating maximum points
result = max_points(N, cards)

# Printing result
print(result)