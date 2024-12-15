from collections import deque

# Read the input
H, W = map(int, input().split())
C_h, C_w = map(int, input().split())
D_h, D_w = map(int, input().split())
S = [list(input().strip()) for _ in range(H)]

# Use a BFS to find the minimum number of times the magician needs to use magic
# Initialize the queue with the starting position
queue = deque([(C_h - 1, C_w - 1, 0)])

# Use a visited array to keep track of visited positions
visited = [[False] * W for _ in range(H)]
visited[C_h - 1][C_w - 1] = True

# Define the possible directions for move A
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

# Start the BFS
while queue:
    # Get the current position and the number of times magic has been used so far
    i, j, magic = queue.popleft()
    
    # Check if we reached the destination
    if i == D_h - 1 and j == D_w - 1:
        print(magic)
        exit()
    
    # Move type A: Check the four adjacent squares
    for k in range(4):
        ni = i + dx[k]
        nj = j + dy[k]
        
        # Check if the new position is within the maze and a road square
        if 0 <= ni < H and 0 <= nj < W and not visited[ni][nj] and S[ni][nj] == '.':
            queue.append((ni, nj, magic))
            visited[ni][nj] = True
    
    # Move type B: Check the 5x5 area centered at the current square
    for ni in range(max(0, i - 2), min(H, i + 3)):
        for nj in range(max(0, j - 2), min(W, j + 3)):
            # Check if the new position is within the maze and a road square
            if not visited[ni][nj] and S[ni][nj] == '.':
                queue.append((ni, nj, magic + 1))
                visited[ni][nj] = True

# If we reached here, it means the magician cannot reach the destination
print(-1)