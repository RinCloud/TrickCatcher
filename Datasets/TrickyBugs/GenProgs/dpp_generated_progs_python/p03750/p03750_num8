from collections import deque

def solve(N, cards, deckY, Q, rounds):
    # Sort cards in ascending order of front value
    cards.sort()
    
    # Prepare prefix sum of deckY
    prefixSumY = [0]
    for i in range(N):
        prefixSumY.append(prefixSumY[-1] + deckY[i])
    
    # Prepare suffix sum of deckY
    suffixSumY = [0]
    for i in range(N, 0, -1):
        suffixSumY.append(suffixSumY[-1] + deckY[i])
    suffixSumY = suffixSumY[::-1]
    
    # Initialize queue
    queue = deque()
    queue.append((0, N+1))
    
    # Initialize answer list
    answer = [-1] * Q
    
    # Process each round
    for r in range(Q):
        front, back = rounds[r]
        # Find the maximum possible score for this round
        while len(queue) > 0:
            frontIndex, backIndex = queue[0]
            
            # Check if condition is met
            if back >= prefixSumY[frontIndex] and front <= suffixSumY[backIndex]:
                answer[r] = backIndex - frontIndex
                break
            
            # Condition is not met, remove current cards from queue
            queue.popleft()
        
        # Add the new card to the queue
        queue.append((front, back))
    
    return answer

# Read input
N = int(input())
cards = [list(map(int, input().split())) for _ in range(N)]
deckY = list(map(int, input().split()))
Q = int(input())
rounds = [list(map(int, input().split())) for _ in range(Q)]

# Solve the problem
result = solve(N, cards, deckY, Q, rounds)

# Print the result
for score in result:
    print(score)