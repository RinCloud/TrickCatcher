def count_edge_paintings(N, M, K, edges):
    MOD = 10**9 + 7

    # Create the adjacency list representation of the graph
    graph = [[] for _ in range(N)]
    for a, b in edges:
        graph[a-1].append(b-1)
        graph[b-1].append(a-1)
    
    # Create a matrix to store the number of ways to paint each edge
    dp = [[0] * K for _ in range(N)]
    
    # Initialize the base case
    for i in range(N):
        dp[i][0] = 1

    # Perform dynamic programming
    for _ in range(M):
        # Create a new matrix to store the next iteration of dp
        next_dp = [[0] * K for _ in range(N)]

        for v in range(N):
            for c1 in range(K):
                # Count the number of ways to paint edge (v, u) using color c1
                for u in graph[v]:
                    for c2 in range(K):
                        if c1 == c2:
                            next_dp[u][c2] += dp[v][c1]
                            next_dp[u][c2] %= MOD
                        else:
                            next_dp[u][c2] += dp[v][c1]
                            next_dp[u][c2] %= MOD
                            next_dp[u][c2] += dp[v][c2]
                            next_dp[u][c2] %= MOD
        
        # Update dp with the values from the next iteration
        dp = next_dp

    # Count the total number of ways to paint all the edges
    total_ways = sum([sum(row) % MOD for row in dp]) % MOD
    return total_ways

# Read the inputs
N, M, K = map(int, input().split())
edges = []
for _ in range(M):
    a, b = map(int, input().split())
    edges.append((a, b))

# Call the function to count the number of ways to paint the edges
result = count_edge_paintings(N, M, K, edges)

# Print the result
print(result)