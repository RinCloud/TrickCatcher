#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define MAXN 55
#define MAXM 25

int N, M;
vector<int> adj[MAXN];
int dp[1 << MAXM][MAXM];
int cnt[1 << MAXM];

void dfs(int u, int p) {
    cnt[u] = 1;
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u);
            cnt[u] += cnt[v];
        }
    }
}

int solve(int mask, int idx) {
    if (dp[mask][idx] != -1) {
        return dp[mask][idx];
    }
    if (idx == M) {
        return dp[mask][idx] = (mask == 0);
    }
    int ans = solve(mask, idx + 1);
    for (int i = 1; i < (1 << M); i++) {
        if ((i & mask) == 0 && (i & (1 << idx)) != 0) {
            int current = 1;
            for (int j = 0; j < M; j++) {
                if ((mask & (1 << j)) != 0) {
                    current &= (cnt[j] <= cnt[idx]);
                }
            }
            if (current) {
                ans += solve(mask | i, idx + 1);
            }
        }
    }
    return dp[mask][idx] = ans;
}

int main() {
    cin >> N;
    for (int i = 1; i < N; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
    }
    dfs(1, 0);
    memset(dp, -1, sizeof(dp));
    int ans = solve(0, 0);
    cout << ans << endl;
    return 0;
}