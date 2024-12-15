#include<bits/stdc++.h>
using namespace std;

const int MAXN = 50005;
const int MAXM = 100005;
const int MAXQ = 50005;
const int MAXMOD = 1000005;

int N, M, Q, MOD;
vector<pair<int, int>> adj[MAXN];
int S[MAXQ], T[MAXQ], R[MAXQ];
bool is_visited[MAXN];
int ans[MAXQ];

void dfs(int v, int r, int x) {
    is_visited[v] = true;
    x %= MOD;

    for (auto u : adj[v]) {
        if (is_visited[u.first]) continue;

        int new_r = (r + x) % MOD;
        if (new_r == 0) ans[u.second] = 1;

        dfs(u.first, new_r, (2 * x) % MOD);
    }
}

int main() {
    cin >> N >> M >> Q >> MOD;

    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, i});
        adj[b].push_back({a, i});
    }

    for (int i = 0; i < Q; i++) {
        cin >> S[i] >> T[i] >> R[i];
    }

    dfs(S[0], R[0], 1);

    for (int i = 0; i < Q; i++) {
        if (ans[i]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}