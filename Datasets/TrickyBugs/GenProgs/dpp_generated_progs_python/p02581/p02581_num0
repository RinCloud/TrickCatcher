# Getting Input from the User
N = int(input())
cards = list(map(int, input().split()))

# Sorting the cards in ascending order
cards.sort()

# Initializing variables
points = 0
leftmost = 0

# Performing N-1 operations
for i in range(N-1):
    # Rearranging the five leftmost cards in any order
    # Removing the three leftmost cards
    # Checking if the integers written on those three cards are all equal
    if cards[leftmost] == cards[leftmost+2]:
        points += 1
    leftmost += 3

# Checking if the integers written on the remaining three cards are all equal
if cards[leftmost] == cards[leftmost+2]:
    points += 1

# Printing the maximum number of points gained
print(points)