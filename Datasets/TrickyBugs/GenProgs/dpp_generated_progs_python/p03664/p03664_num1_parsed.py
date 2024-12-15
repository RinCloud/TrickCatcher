'''
An edge can be removed or not removed. For each edge, there are two possibilities. This makes a total of 2^M different possibilities.

We will use dynamic programming to compute the minimum budget needed for each possibility.

dp[mask][v] denotes the minimum budget needed to reach vertex v with the set of removed edges represented by the binary representation mask.

At the beginning, dp[mask][1] will be initialized to 0 since there are no edges to be removed.

For each vertex v, we will check all edges (u, v) and for each mask, we will update the value of dp[mask][v] as min(dp[mask][v], dp[mask_without_edge][u] + cost_of_edge) where mask_without_edge is obtained by removing the edge (u, v) from the current mask.

Finally, the minimum budget needed to reach vertex N with all edges removed will be dp[(1 << M) - 1][N].

'''

# Read input
N, M = map(int, input().split())
edges = []
for _ in range(M):
    a, b, c = map(int, input().split())
    edges.append((a, b, c))

# Initialize dp array
dp = [[float('inf')] * (N + 1) for _ in range(1 << M)]
dp[0][1] = 0

# Compute minimum budget
for mask in range(1 << M):
    for v in range(1, N + 1):
        for u in range(M):
            a, b, c = edges[u]
            if (mask >> u) & 1:
                dp[mask][v] = min(dp[mask][v], dp[mask ^ (1 << u)][b] + c * (a == v) + c * (b == v))

# Output the answer
print(dp[(1 << M) - 1][N])