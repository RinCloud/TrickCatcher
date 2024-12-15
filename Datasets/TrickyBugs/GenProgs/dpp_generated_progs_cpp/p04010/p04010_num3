#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> adj[1000005];
int color[1000005];
int blackCount;

void bfs(int src) {
    queue<int> q;
    q.push(src);
    color[src] = 1;
    blackCount++;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (color[v] == 0) {
                color[v] = -color[u];
                if (color[v] == -1) blackCount++;

                q.push(v);
            } else if (color[v] == color[u]) {
                cout << -1 << endl;
                exit(0);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (color[i] == 0) {
            blackCount = 0;
            bfs(i);
            ans += blackCount / 2;
        }
    }

    cout << ans << endl;

    return 0;
}