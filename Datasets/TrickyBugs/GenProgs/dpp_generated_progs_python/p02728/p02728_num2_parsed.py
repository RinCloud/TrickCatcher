# Implementation of program

import sys
sys.setrecursionlimit(10**7)

# Function to calculate number of ways to write numbers on vertices
def dfs(v: int, p: int):
    ans[v] = 1
    siz[v] = 1
    for u in graph[v]:
        if u == p:
            continue
        dfs(u, v)
        siz[v] += siz[u]
        ans[v] *= ans[u] * dp[siz[u]]
        ans[v] %= MOD
    dp[siz[v]] = (dp[siz[v]] + ans[v]) % MOD

# Read input
N = int(input())
graph = [[] for _ in range(N+1)]
for _ in range(N-1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

# Constants
MOD = int(1e9) + 7

# Initialize variables
dp = [0] * (N+1)
ans = [0] * (N+1)
siz = [0] * (N+1)

# Calculate number of ways for each vertex
dfs(1, -1)

# Print the answers
for i in range(1, N+1):
    print(ans[i])