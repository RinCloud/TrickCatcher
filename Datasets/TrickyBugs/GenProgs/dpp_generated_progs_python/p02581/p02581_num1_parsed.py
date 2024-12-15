# Program

N = int(input())
cards = list(map(int, input().split()))

points = 0

# rearrange and remove cards N-1 times
for _ in range(N-1):
    # choose any 5 cards from the leftmost
    group = cards[:5]
    
    # check if all three cards have equal numbers
    if group[0] == group[1] == group[2]:
        points += 1
    
    # remove the three leftmost cards
    cards = cards[3:] + group[3:]

# check if remaining three cards have equal numbers
if cards[0] == cards[1] == cards[2]:
    points += 1

print(points)