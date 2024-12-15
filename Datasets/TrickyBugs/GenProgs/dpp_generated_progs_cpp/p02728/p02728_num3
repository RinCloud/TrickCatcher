#include <iostream>
#include <vector>

using namespace std;

const int mod = 1e9 + 7;

vector<vector<int>> tree;
vector<long long> dp;
vector<long long> ans;

long long dfs(int u, int p) {
    dp[u] = 1;
    for (int v : tree[u]) {
        if (v == p) continue;
        dp[u] = (dp[u] * (dfs(v, u) + 1)) % mod;
    }
    return dp[u];
}

void solve(int u, int p, long long par_val) {
    ans[u] = (dp[u] * par_val) % mod;
    for (int v : tree[u]) {
        if (v == p) continue;
        long long temp = dp[v] * par_val % mod;
        par_val = par_val * (dp[u] + 1) % mod * modPow(dp[v] + 1, mod - 2) % mod;
        solve(v, u, par_val);
        par_val = temp;
    }
}

int main() {
    int N;
    cin >> N;

    tree.resize(N + 1);
    ans.resize(N + 1);
    dp.resize(N + 1);

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    dfs(1, -1);
    solve(1, -1, 1);

    for (int i = 1; i <= N; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}