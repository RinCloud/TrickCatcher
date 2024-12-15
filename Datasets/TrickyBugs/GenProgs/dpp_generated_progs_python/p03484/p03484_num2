from collections import defaultdict

def solve(N, edges):
    # Create adjacency list
    adj = defaultdict(list)
    for a, b in edges:
        adj[a].append(b)
        adj[b].append(a)

    # Count the number of edges for each vertex
    count = [0] * (N+1)
    for a, b in edges:
        count[a] += 1
        count[b] += 1

    # Calculate the maximum length of a Christmas Path
    max_length = 0
    for c in count[1:]:
        max_length = max(max_length, c)

    # Find the lexicographically smallest pair (A,B)
    A = 1
    B = max_length+1
    while True:
        ok = True
        for i in range(2, N+1):
            if count[i] == B-1:
                A = max(A, B-1)
                B += 1
                ok = False
                break
            elif count[i] >= B:
                ok = False
                break
        if ok:
            break

    return A, B-1


# Read input
N = int(input())
edges = [list(map(int, input().split())) for _ in range(N-1)]

# Solve the problem
A, B = solve(N, edges)

# Print the result
print(A, B)