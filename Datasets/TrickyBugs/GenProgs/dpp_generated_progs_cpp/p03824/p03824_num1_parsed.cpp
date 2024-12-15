#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
int maxDepth = 0;

void dfs(int v, int depth, int parent) {
    maxDepth = max(maxDepth, depth);
    for (int u : adj[v]) {
        if (u != parent) {
            dfs(u, depth + 1, v);
        }
    }
}

int main() {
    int n;
    cin >> n;

    adj.resize(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1, 0, -1);

    cout << maxDepth << endl;

    return 0;
}