#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 50000;
const int MAX_M = 50000;
const int MAX_Q = 50000;

int N, M, Q, MOD;
vector<pair<int, int>> edges[MAX_N + 1];
int dist[MAX_N + 1];
int dp[MAX_N + 1][(1 << 17) + 1]; // dp[i][j] stores whether there is a path from S to i with length j % MOD

void dfs(int u, int p, int len) {
    dist[u] = len;
    for (auto& edge : edges[u]) {
        int v = edge.first;
        int c = edge.second;
        if (v == p) continue;
        dfs(v, u, (2 * len + c) % MOD);
    }
}

void dp_solve(int u, int p) {
    dp[u][dist[u] % MOD] = 1;
    for (auto& edge : edges[u]) {
        int v = edge.first;
        int c = edge.second;
        if (v == p) continue;
        dp_solve(v, u);
        for (int i = 0; i < MOD; i++) {
            dp[u][(dist[u] + 2 * c + i) % MOD] |= dp[v][i];
        }
    }
}

int main() {
    cin >> N >> M >> Q >> MOD;
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edges[a].emplace_back(b, c);
        edges[b].emplace_back(a, c);
    }
    for (int i = 1; i <= N; i++) {
        dist[i] = -1;
    }
    dfs(1, -1, 0);
    dp_solve(1, -1);
    for (int i = 0; i < Q; i++) {
        int s, t, r;
        cin >> s >> t >> r;
        if (dist[s] == -1 || dist[t] == -1) {
            cout << "NO" << endl;
        } else if (dp[s][r] && (dist[t] % MOD == r || (dist[t] - dist[s] + MOD) % MOD == r)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}