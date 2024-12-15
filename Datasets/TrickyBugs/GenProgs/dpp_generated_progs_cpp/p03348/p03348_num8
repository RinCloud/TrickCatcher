#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int MAXN = 105;

int N;
vector<int> adj[MAXN];
int f[MAXN][MAXN];
int d[MAXN];

void dfs(int u, int p) {
    d[u] = 0;
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u);
            d[u] = max(d[u], d[v] + 1);
        }
    }
}

int main() {
    cin >> N;
    for (int i = 1; i < N; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int ans = N - 1;
    for (int u = 1; u <= N; u++) {
        dfs(u, -1);
        for (int v = 1; v <= N; v++) {
            f[u][v] = d[v];
            ans = min(ans, f[u][v]);
        }
    }
    
    cout << ans + 1 << " ";
    
    vector<int> leaves;
    for (int u = 1; u <= N; u++) {
        for (int v = 1; v <= N; v++) {
            if (f[u][v] == ans) {
                leaves.push_back(v);
            }
        }
    }
    
    int cnt = 0;
    for (int v : leaves) {
        cnt += (count(adj[v].begin(), adj[v].end(), v) == 1);
    }
    
    cout << cnt << endl;
    
    return 0;
}