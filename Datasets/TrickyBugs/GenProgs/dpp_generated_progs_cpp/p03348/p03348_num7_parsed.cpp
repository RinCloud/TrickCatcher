#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <climits>
using namespace std;

vector<int> adj[105];
int d[105][105], f[105];
bool vis[105];

void bfs(int s, int n) {
    queue<int> q;
    q.push(s);
    d[s][s] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v: adj[u]) {
            if (d[s][v] == INT_MAX) {
                d[s][v] = d[s][u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            d[i][j] = INT_MAX;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        bfs(i, n);
    }
    
    int ans = INT_MAX;
    for (int u = 1; u <= n; u++) {
        int leafCount = 0;
        for (int v = 1; v <= n; v++) {
            if (u != v && d[u][v] % 2 == 0) {
                leafCount++;
            }
        }
        ans = min(ans, leafCount);
    }
    
    cout << n - 1 << " " << ans << endl;
    
    return 0;
}