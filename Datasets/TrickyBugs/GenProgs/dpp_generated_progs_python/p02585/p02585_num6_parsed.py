import sys

# Read input from stdin
N, K = map(int, sys.stdin.readline().split())
P = list(map(int, sys.stdin.readline().split()))
C = list(map(int, sys.stdin.readline().split()))

# Initialize variables
max_score = float('-inf')
total_score = 0

# Iterate through all possible starting squares
for start_square in range(N):
    current_square = start_square
    score = 0
    num_moves = 0
    
    # Move the piece K times or until a cycle is detected
    while num_moves < K and current_square not in P:
        score += C[current_square]
        current_square = P[current_square] - 1
        num_moves += 1
    
    # If a cycle is detected, calculate the maximum score possible
    if num_moves == K and current_square == start_square:
        max_score = max(max_score, score)
    
    # If not in a cycle, calculate the maximum score possible by repeating the cycle
    elif num_moves < K:
        cycle_score = score
        cycle_length = num_moves
        remaining_moves = K - num_moves
        
        if cycle_score > 0:
            max_score = max(max_score, score + remaining_moves // cycle_length * cycle_score)
        
        if cycle_score + remaining_moves // cycle_length * cycle_score > 0:
            max_score = max(max_score, score + remaining_moves//cycle_length * cycle_score + remaining_moves%cycle_length * C[current_square])
    
    # Calculate maximum score for the remaining moves in case a cycle is not detected
    if num_moves < K:
        remaining_moves = K - num_moves
        
        if score > 0:
            max_score = max(max_score, score + remaining_moves * cycle_score)
        if score + remaining_moves * cycle_score > 0:
            max_score = max(max_score, score + remaining_moves * cycle_score + remaining_moves % cycle_length * C[current_square])

# Print the maximum possible score
print(max_score)