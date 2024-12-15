#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

vector<int> adj[200001];
long long dp[200001];
long long ans[200001];
int subtree_size[200001];

void dfs(int u, int p) {
    dp[u] = 1;
    subtree_size[u] = 1;
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        subtree_size[u] += subtree_size[v];
        dp[u] = (dp[u] * dp[v]) % MOD;
    }
    dp[u] = (dp[u] * (subtree_size[u] - 1)) % MOD;
}

void solve(int u, int p, long long partial_answer) {
    ans[u] = (dp[u] * partial_answer) % MOD;
    for (int v : adj[u]) {
        if (v == p) continue;
        long long new_partial_answer = (ans[u] * ((subtree_size[v] + 1) % MOD)) % MOD;
        solve(v, u, new_partial_answer);
    }
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1, -1);
    solve(1, -1, 1);

    for (int i = 1; i <= N; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}