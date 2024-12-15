# The problem is asking us to find the number of ways to choose a permutation p of the vertices such that the sum of the distances from each vertex to its corresponding vertex in the permutation is maximized.

# To solve this problem, we can use a depth-first search (DFS) algorithm to calculate the number of descendants for each vertex. This will give us the number of paths passing through each vertex.

# Next, we can calculate the sum of the distances for all permutations using dynamic programming. We will iterate over all possible positions for each vertex in the permutation and calculate the maximum sum of distances. We will store the intermediate results in a 2D array.

# Finally, we will return the maximum sum of distances modulo 10^9 + 7.

MOD = 10**9 + 7

def solve():
    N = int(input())
    tree = [[] for _ in range(N+1)]
    for _ in range(N-1):
        x, y = map(int, input().split())
        tree[x].append(y)
        tree[y].append(x)
    
    descendants = [0] * (N+1)
    dp = [[0] * (N+1) for _ in range(N+1)]
    
    def dfs(v, parent):
        descendants[v] = 1
        for u in tree[v]:
            if u != parent:
                dfs(u, v)
                descendants[v] += descendants[u]
    
    def dp_calc(v, parent):
        dp[v][1] = descendants[v]
        for u in tree[v]:
            if u != parent:
                dp_calc(u, v)
                for i in range(descendants[v], 0, -1):
                    for j in range(1, descendants[u]+1):
                        dp[v][i+j] += dp[u][j]
                        dp[v][i+j] %= MOD
        for i in range(descendants[v], 0, -1):
            dp[v][i] += dp[v][i-1]
            dp[v][i] %= MOD
    
    dfs(1, 0)
    dp_calc(1, 0)
    
    ans = sum(dp[1]) % MOD
    print(ans)

solve()