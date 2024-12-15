from collections import defaultdict

MOD = 10**9+7

def dfs(v, p, tree, fact):
    res = 1
    for u in tree[v]:
        if u == p:
            continue
        dfs(u, v, tree, fact)
        res *= fact[u]
        res %= MOD
    fact[v] = res

def solve():
    N = int(input())
    tree = defaultdict(list)
    for _ in range(N-1):
        a, b = map(int, input().split())
        tree[a].append(b)
        tree[b].append(a)

    fact = [0] * (N+1)
    dfs(1, -1, tree, fact)

    fact_sum = [1] * (N+1)
    for i in range(2, N+1):
        fact_sum[i] = (i * fact_sum[i-1]) % MOD

    for k in range(1, N+1):
        ans = fact_sum[N] * pow(fact[k], MOD-2, MOD) * pow(fact[N-k], MOD-2, MOD)
        ans %= MOD
        print(ans)

solve()