from collections import defaultdict

# Read input
N, M, Q, MOD = map(int, input().split())
edges = []
for _ in range(M):
    A, B, C = map(int, input().split())
    edges.append((A, B, C))

queries = []
for _ in range(Q):
    S, T, R = map(int, input().split())
    queries.append((S, T, R))


def dfs(v, R, sum_lengths):
    if sum_lengths[v] == R:
        return True
    elif sum_lengths[v] > R:
        return False
    
    for u, length in adj_list[v]:
        new_sum_lengths = sum_lengths[u] - sum_lengths[v] + length
        if dfs(u, R, new_sum_lengths):
            return True
    
    return False


# Precompute sum of lengths
sum_lengths = [0] * (N + 1)
for A, B, C in edges:
    sum_lengths[A] += C
    sum_lengths[B] += C

# Build adjacency list
adj_list = defaultdict(list)
for A, B, C in edges:
    adj_list[A].append((B, C))
    adj_list[B].append((A, C))

# Process queries
for S, T, R in queries:
    # Check if there exists a path from S to T with length R % MOD
    if dfs(S, R % MOD, sum_lengths):
        print("YES")
    else:
        print("NO")