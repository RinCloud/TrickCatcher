import heapq

# Function to calculate the maximum possible score for each round
def calculate_max_score(N, cards, Y, Q, rounds):
    # Sort the cards in descending order of the front side integer
    cards.sort(reverse=True)
    
    # Initialize a heap to store the back side integers of the cards from Y
    y_heap = []
    for y in Y:
        heapq.heappush(y_heap, y)
    
    # Initialize the maximum possible score for each round
    max_scores = []
    
    # Iterate through each round
    for d, e in rounds:
        # Add the new card to the deck X
        heapq.heappush(cards, (-d, e))
        
        # Initialize the current score for this round
        current_score = 0
        
        # Iterate through each card from X
        for i in range(N):
            # Get the front and back side integers of the card from X
            a, b = cards[i]
            
            # Check if the back side of the card from X can be paired with a card from Y
            if y_heap and b >= y_heap[0]:
                # Pair the card from X with the lowest back side integer of a card from Y
                heapq.heappop(y_heap)
                current_score += 1
            else:
                # Pair the card from X with the lowest front side integer of a card from Y
                if a >= y_heap[0]:
                    heapq.heappop(y_heap)
        
        # Check if it is possible to satisfy the condition for each pair
        if not y_heap:
            # Add the current score to the maximum scores list
            max_scores.append(current_score)
        else:
            # It is not possible to satisfy the condition for each pair, assign -1 score
            max_scores.append(-1)
        
        # Reset the heap for the next round
        y_heap = []
        for y in Y:
            heapq.heappush(y_heap, y)
    
    return max_scores


# Read input
N = int(input())
cards = []
for _ in range(N):
    a, b = map(int, input().split())
    cards.append((-a, b))
Y = list(map(int, input().split()))
Q = int(input())
rounds = []
for _ in range(Q):
    d, e = map(int, input().split())
    rounds.append((d, e))

# Call the calculate_max_score function and print the maximum scores for each round
max_scores = calculate_max_score(N, cards, Y, Q, rounds)
for score in max_scores:
    print(score)