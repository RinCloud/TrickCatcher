from collections import defaultdict, deque

def determine_winner(N, roads):
    adjacency_list = defaultdict(list)
    for a, b in roads:
        adjacency_list[a].append(b)
        adjacency_list[b].append(a)

    # Initialize visited and distances for Fennec and Snuke
    visited_fennec = [False] * (N + 1)
    distances_fennec = [0] * (N + 1)
    visited_snuke = [False] * (N + 1)
    distances_snuke = [0] * (N + 1)

    # Perform Breadth First Search to calculate distances from starting points
    def bfs(start, visited, distances):
        queue = deque()
        queue.append(start)
        visited[start] = True

        while queue:
            node = queue.popleft()
            for neighbor in adjacency_list[node]:
                if not visited[neighbor]:
                    queue.append(neighbor)
                    visited[neighbor] = True
                    distances[neighbor] = distances[node] + 1

    # Calculate distances from starting points for Fennec and Snuke
    bfs(1, visited_fennec, distances_fennec)
    bfs(N, visited_snuke, distances_snuke)

    # Count the number of cells that can be reached by Fennec from Cell 1, and by Snuke from Cell N
    fennec_reachable = sum(1 for i in range(1, N+1) if distances_fennec[i] <= distances_snuke[i])
    snuke_reachable = N - fennec_reachable

    # Determine the winner based on the number of reachable cells
    if fennec_reachable > snuke_reachable:
        return "Fennec"
    else:
        return "Snuke"

# Read input from standard input
N = int(input())
roads = [list(map(int, input().split())) for _ in range(N-1)]

# Call the function to determine the winner and print the result
print(determine_winner(N, roads))