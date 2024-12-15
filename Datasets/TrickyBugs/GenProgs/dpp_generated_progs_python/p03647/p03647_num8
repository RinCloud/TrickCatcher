from collections import defaultdict

def possible_to_reach_n(N, M, services):
    # Create a graph representation of the islands and boat services
    graph = defaultdict(list)
    for a, b in services:
        graph[a].append(b)
        graph[b].append(a)

    # Check all possible paths using two boat services
    for i in graph[1]:
        for j in graph[i]:
            if j == N:
                return 'POSSIBLE'

    return 'IMPOSSIBLE'

# Read the input
N, M = map(int, input().split())
services = [tuple(map(int, input().split())) for _ in range(M)]

# Check if it is possible to reach Island N using two boat services
result = possible_to_reach_n(N, M, services)

# Print the result
print(result)