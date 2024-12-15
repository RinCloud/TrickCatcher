from collections import defaultdict

def dfs(node, parent, edges, black_edges):
    count = 0
    for child in edges[node]:
        if child == parent:
            continue
        res = dfs(child, node, edges, black_edges)
        if res == 0:
            return 0
        count += res
    if parent != -1 and node in black_edges[parent]:
        count -= 1
    return count

def solve(N, edges, M, black_edges):
    dp = [[-1] * N for _ in range(N)]
    for i in range(N):
        dp[i][i] = 1

    for i in range(N):
        for j in range(i+1, N):
            if dp[i][j] == -1:
                continue
            for k in range(N):
                if k != j and (k, j) not in edges[i]:
                    dp[j][k] = dp[i][j] + 1

    ans = 0
    for i in range(1, 1 << N):
        temp = bin(i).count('1')
        if temp != N // 2:
            continue
        edges_used = defaultdict(set)
        for j in range(N):
            if i & (1 << j):
                for k in range(N):
                    if dp[j][k] != -1:
                        edges_used[j].add(k)
        valid = True
        for j in range(M):
            u, v = black_edges[j]
            if u not in edges_used[v]:
                valid = False
                break
        if valid:
            ans += 1

    return ans

N = int(input())
edges = defaultdict(set)
for _ in range(N-1):
    a, b = map(int, input().split())
    edges[a-1].add(b-1)
    edges[b-1].add(a-1)
M = int(input())
black_edges = []
for _ in range(M):
    u, v = map(int, input().split())
    black_edges.append((u-1, v-1))

print(solve(N, edges, M, black_edges))