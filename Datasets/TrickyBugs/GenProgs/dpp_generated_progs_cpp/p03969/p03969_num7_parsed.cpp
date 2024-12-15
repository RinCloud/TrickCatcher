#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 51;
const int MAXM = 101;

vector<int> adj[MAXN];
int dp[MAXN][MAXM][MAXN];
int n, m, k;

int dfs(int u, int e, int p) {
    if (dp[u][e][p] != -1) {
        return dp[u][e][p];
    }
    int count = 0;
    for (int v : adj[u]) {
        if (v == p) {
            continue;
        }
        for (int i = 1; i <= k; i++) {
            if (i != e) {
                count = (count + dfs(v, i, u)) % MOD;
            }
        }
    }
    return dp[u][e][p] = count;
}

int main() {
    cin >> n >> m >> k;

    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int answer = 0;
    for (int i = 1; i <= k; i++) {
        answer = (answer + dfs(1, i, 0)) % MOD;
    }
    cout << answer << endl;

    return 0;
}