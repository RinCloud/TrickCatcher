from collections import defaultdict

def solve(N, M, edges):
    # Initialize the score
    score = [float('-inf')] * (N + 1)
    score[1] = 0

    # Perform Bellman-Ford algorithm
    for _ in range(N-1):
        for a, b, c in edges:
            if score[a] != float('-inf'):
                score[b] = max(score[b], score[a] + c)

    # Detect negative cycles
    negative_cycle = [0] * (N + 1)
    for _ in range(N):
        for a, b, c in edges:
            if score[a] != float('-inf') and score[b] < score[a] + c:
                score[b] = score[a] + c
                negative_cycle[b] = 1

    # Check if score can be increased indefinitely
    if negative_cycle[N]:
        return 'inf'
    else:
        return score[N]

# Read input
N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b, c = map(int, input().split())
    edges.append((a, b, c))

# Solve the problem
result = solve(N, M, edges)

# Print the result
print(result)