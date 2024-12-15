import sys

def min_casts(H, W, K, A):
    # Initialize variables
    visited = [[False] * W for _ in range(H)]
    queue = []
    
    # Find the starting position
    start_row, start_col = 0, 0
    for i in range(H):
        for j in range(W):
            if A[i][j] == 'S':
                start_row, start_col = i, j
                break
                
    # Add the starting position to the queue
    queue.append((start_row, start_col, 0))
    visited[start_row][start_col] = True
    
    # Perform a breadth-first search
    while queue:
        row, col, casts = queue.pop(0)
        
        # Check if at an exit
        if row == 0 or row == H-1 or col == 0 or col == W-1:
            return casts
        
        # Check adjacent rooms
        for dr, dc in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            new_row, new_col = row + dr, col + dc
            
            # Check if in bounds
            if new_row >= 0 and new_row < H and new_col >= 0 and new_col < W:
                
                # Check if room is unlocked
                if A[new_row][new_col] != '#':
                    # Add the room to the queue if not already visited
                    if not visited[new_row][new_col]:
                        queue.append((new_row, new_col, casts))
                        visited[new_row][new_col] = True
        
        # Unlock adjacent locked rooms
        for dr, dc in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            for i in range(1, K+1):
                new_row, new_col = row + dr * i, col + dc * i
                
                # Check if in bounds and room is locked
                if new_row >= 0 and new_row < H and new_col >= 0 and new_col < W and A[new_row][new_col] == '#':
                    # Unlock the room
                    A[new_row] = list(A[new_row])
                    A[new_row][new_col] = '.'
                    A[new_row] = ''.join(A[new_row])
                    
                    # Add the unlocked room to the queue if not already visited
                    if not visited[new_row][new_col]:
                        queue.append((new_row, new_col, casts + 1))
                        visited[new_row][new_col] = True
    
    # No path to an exit
    return -1

# Read input from standard input
H, W, K = map(int, sys.stdin.readline().split())
A = [sys.stdin.readline().rstrip() for _ in range(H)]

# Calculate and print the minimum necessary number of casts
print(min_casts(H, W, K, A))