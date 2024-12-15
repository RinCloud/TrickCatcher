from collections import defaultdict

def dfs(v, p, g):
    res = 0
    for u in g[v]:
        if u == p:
            continue
        res = max(res, dfs(u, v, g))
    return res + 1

def solve():
    n = int(input())
    g = defaultdict(list)
    for _ in range(n-1):
        a, b = map(int, input().split())
        g[a].append(b)
        g[b].append(a)
    
    cnt = 0
    for i in range(1, n+1):
        if len(g[i]) == 1:
            cnt += 1
    
    diam = 0
    for i in range(1, n+1):
        if len(g[i]) > 1:
            diam = max(diam, dfs(i, -1, g))
    
    ans_A = cnt - 1
    ans_B = (diam + 1) // 2
    
    print(ans_A, ans_B)

solve()