#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAXN = 50010;
const int MAXM = 100010;
const int MAXQ = 50010;

vector<pair<int, int>> adj[MAXN];
int first[MAXM], start[MAXN], fa[MAXN], dep[MAXN], dfs_clock;

void dfs(int u, int e, int d) {
    first[e] = ++dfs_clock;
    start[e] = u;
    dep[u] = d;
    for (auto& [v, w] : adj[u]) {
        if (v != fa[u]) {
            fa[v] = u;
            dfs(v, w, d + 1);
        }
    }
}

int find(int x) {
    return x == fa[x] ? x : fa[x] = find(fa[x]);
}

int jump(int x, int len) {
    while (len) {
        int k = __builtin_ctz(len);
        x = fa[x][k];
        len &= len - 1;
    }
    return x;
}

int main() {
    int N, M, Q, MOD;
    cin >> N >> M >> Q >> MOD;
    for (int i = 1; i <= M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        adj[A].emplace_back(B, C);
        adj[B].emplace_back(A, C);
    }
    dfs(1, 0, 0);
    for (int i = 1; i <= N; i++) {
        fa[i] = i;
    }
    for (int i = 1; i <= N; i++) {
        for (auto& [v, w] : adj[i]) {
            if (v != fa[i]) {
                fa[v] = i;
            }
        }
    }
    for (int i = 1; i <= M; i++) {
        if (dep[start[i]] > dep[find(start[i])]) {
            start[i] = find(start[i]);
        }
    }
    while (Q--) {
        int S, T, R;
        cin >> S >> T >> R;
        R %= MOD;
        S = find(S);
        T = find(T);
        if (fa[S] != fa[T]) {
            cout << "NO" << endl;
            continue;
        }
        int delta = (dep[S] + dep[T] - 2 * dep[find(S)]) % MOD;
        int lca = jump(S, delta) == T ? find(S) : jump(T, delta);
        delta = (first[S] + first[T] - 2 * first[lca]) % MOD;
        int length = (R + MOD - delta) % MOD;
        if (length & (length - 1)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}