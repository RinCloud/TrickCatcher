'''
We can solve this problem using Breadth First Search (BFS) algorithm. We'll start from the initial room where Takahashi is located and perform BFS to find the nearest exit.

1. Initialize a queue to store the rooms to be visited, and a visited set to keep track of visited rooms.
2. Add the initial room to the queue and mark it as visited.
3. Initialize a variable to keep track of the minimum number of casts required, starting from 0.
4. While the queue is not empty:
    4.1. Pop a room from the front of the queue.
    4.2. If the room has an exit, return the minimum number of casts.
    4.3. For each adjacent room:
        4.3.1. If it is a valid room (within the building boundaries) and not locked, mark it as visited and add it to the queue.
        4.3.2. If it is a locked room, and the number of casts is less than or equal to K, mark it as unlocked, mark it as visited and add it to the queue.
    4.4. Increase the minimum number of casts by 1.
5. If no exit is found, return -1 since it is not possible to escape.

'''

from collections import deque

# Function to check if a room is valid and within the building boundaries
def is_valid_room(i, j, H, W):
    if i >= 0 and i < H and j >= 0 and j < W:
        return True
    return False

# Function to perform BFS and find the minimum number of casts
def find_minimum_casts(H, W, K, building):
    queue = deque()
    visited = set()
    directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    
    for i in range(H):
        for j in range(W):
            if building[i][j] == 'S':
                queue.append((i, j, 0))
                visited.add((i, j))
    
    while queue:
        i, j, casts = queue.popleft()
        
        # Check if the current room has an exit
        if i == 0 or i == H - 1 or j == 0 or j == W - 1:
            return casts
        
        # Explore adjacent rooms
        for di, dj in directions:
            ni, nj = i + di, j + dj
            
            if is_valid_room(ni, nj, H, W) and (ni, nj) not in visited:
                if building[ni][nj] == '.':
                    queue.append((ni, nj, casts))
                    visited.add((ni, nj))
                elif building[ni][nj] == '#' and casts < K:
                    queue.append((ni, nj, casts + 1))
                    visited.add((ni, nj))
    
    return -1

# Read input
H, W, K = map(int, input().split())
building = [input() for _ in range(H)]

# Find the minimum number of casts
minimum_casts = find_minimum_casts(H, W, K, building)

# Print the result
print(minimum_casts)