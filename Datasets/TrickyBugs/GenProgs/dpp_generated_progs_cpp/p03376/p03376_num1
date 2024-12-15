#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 55;
const int INF = 1000000007;

vector<int> adj[MAXN];
int m[MAXN];
int dp[MAXN][MAXN];
int ans;

void dfs(int u, int fa, int X, int D) {
    for (int i = 0; i <= X; ++i)
        dp[u][i] = -INF;
    dp[u][m[u]] = 0;
    for (int v : adj[u]) {
        if (v == fa) continue;
        dfs(v, u, X, D);
        for (int i = X; i >= 0; --i) {
            for (int j = 0; j + i <= X; ++j) {
                dp[u][i + j] = max(dp[u][i + j], dp[u][i] + dp[v][j]);
            }
        }
    }
    for (int i = X; i >= 0; --i) {
        int tmp = min(D - (m[u] - i), X - i);
        ans = max(ans, dp[u][i] + tmp);
    }
}

int main() {
    int N, X, D;
    cin >> N >> X >> D;
    for (int i = 1; i <= N; ++i) {
        cin >> m[i];
        dp[i][0] = dp[i][1] = -INF;
    }
    for (int i = 2; i <= N; ++i) {
        int p;
        cin >> m[i] >> p;
        adj[p].push_back(i);
    }
    ans = 0;
    dfs(1, 0, X, D);
    cout << ans << endl;
    return 0;
}