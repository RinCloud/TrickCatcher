#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

const int mod = pow(10, 9) + 7;
vector<int> adj[200005];
int dp[200005];

void dfs(int u, int p) {
    dp[u] = 1;
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        dp[u] = (dp[u] * (dp[v] + 1) % mod) % mod;
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

    for (int i = 1; i <= N; i++) {
        cout << dp[i] << endl;
    }

    return 0;
}