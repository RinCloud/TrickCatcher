from collections import deque

def winner_of_game(N, roads):
    adjacency_list = [[] for _ in range(N+1)]
    
    # Create the adjacency list representation of the graph
    for a, b in roads:
        adjacency_list[a].append(b)
        adjacency_list[b].append(a)
    
    black_distance = [-1] * (N+1)
    white_distance = [-1] * (N+1)

    black_distance[1] = 0
    white_distance[N] = 0

    # Perform BFS starting from the black cell to calculate the distances of other cells from the black cell
    queue = deque([1])
    while queue:
        current_node = queue.popleft()
        for neighbor in adjacency_list[current_node]:
            if black_distance[neighbor] == -1:
                black_distance[neighbor] = black_distance[current_node] + 1
                queue.append(neighbor)

    # Perform BFS starting from the white cell to calculate the distances of other cells from the white cell
    queue = deque([N])
    while queue:
        current_node = queue.popleft()
        for neighbor in adjacency_list[current_node]:
            if white_distance[neighbor] == -1:
                white_distance[neighbor] = white_distance[current_node] + 1
                queue.append(neighbor)

    fennec_count = 0
    snuke_count = 0

    # Count the number of cells that Fennec and Snuke can reach
    for i in range(1, N+1):
        if black_distance[i] <= white_distance[i]:
            fennec_count += 1
        else:
            snuke_count += 1
            
    # Determine the winner of the game based on the counts
    if fennec_count > snuke_count:
        return "Fennec"
    else:
        return "Snuke"

# Read input
N = int(input())
roads = []
for _ in range(N-1):
    a, b = map(int, input().split())
    roads.append((a, b))

# Call the function and print the result
print(winner_of_game(N, roads))