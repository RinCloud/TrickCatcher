#include <cstdio>
#include <cstring>
#include <vector>

const int N = 200000;
const int MOD = (int)1e9 + 7;

int INV[N + 1], x[N + N], parent[N], from[N], size[N];
std::vector<int> graph[N], vertices;

int find(int u)
{
    return ~parent[u] ? parent[u] = find(parent[u]) : u;
}

bool dfs(int u, int v)
{
    if (~from[v]) {
        if (from[v] != u) {
            return false;
        }
    } else {
        from[v] = u;
        size[v] = 0;
        vertices.push_back(v);
        for (auto w : graph[v]) {
            if (w != u) {
                if (!dfs(v, w)) {
                    return false;
                }
            }
        }
    }
    return true;
}

int rec(int u, int v)
{
    if (!size[v]) {
        size[v] = 1;
        for (int w : graph[v]) {
            if (w < u) {
                size[v] += rec(v, w);
            }
        }
    }
    return size[v];
}

int solve(int a, int b)
{
    for (int v : vertices) {
        from[v] = -1;
    }
    vertices.clear();
    if (!dfs(a, b)) {
        return 0;
    }
    int result = 1;
    for (int v : vertices) {
        result = 1LL * result * INV[rec(from[v], v)] % MOD;
    }
    return result;
}

int main()
{
#ifdef LOCAL_JUDGE
    freopen("F.in", "r", stdin);
#endif
    INV[1] = 1;
    for (int i = 2; i <= N; ++ i) {
        INV[i] = 1LL * (MOD - MOD / i) * INV[MOD % i] % MOD;
    }
    int n;
    while (scanf("%d", &n) == 1) {
        for (int i = 0; i < n << 1; ++ i) {
            graph[i].clear();
        }
        for (int i = 0; i < n << 2; ++ i) {
            scanf("%d", x + i);
            x[i] --;
            if (i & 1) {
                x[i] += n;
            }
        }
        for (int i = 0; i < n << 2; ++ i) {
            graph[x[i]].push_back(x[i ^ 1]);
        }
        int result = 1;
        memset(from, -1, sizeof(from));
        memset(parent, -1, sizeof(parent));
        for (int i = 0; i < n << 1 && result; ++ i) {
            result = result * (i + 1LL) % MOD;
            int a = x[i << 1];
            int b = x[i << 1 | 1];
            if (find(a) == find(b)) {
                result = 1LL * result * (solve(a, b) + solve(b, a)) % MOD;
            } else {
                parent[find(a)] = find(b);
            }
        }
        printf("%d\n", result);
    }
}