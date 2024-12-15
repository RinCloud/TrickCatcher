from collections import defaultdict

MOD = 10**9 + 7

def dfs(v, parent):
    subtree_size[v] = 1
    for u in adj_list[v]:
        if u != parent:
            dfs(u, v)
            subtree_size[v] += subtree_size[u]
            dp[v] += dp[u]

    dp[v] += subtree_size[v] - 1

N = int(input())
adj_list = defaultdict(list)
subtree_size = [0] * (N + 1)
dp = [0] * (N + 1)

for _ in range(N - 1):
    x, y = map(int, input().split())
    adj_list[x].append(y)
    adj_list[y].append(x)

dfs(1, -1)

ans = 0
for i in range(1, N + 1):
    ans += dp[i]
    ans %= MOD

print(ans)