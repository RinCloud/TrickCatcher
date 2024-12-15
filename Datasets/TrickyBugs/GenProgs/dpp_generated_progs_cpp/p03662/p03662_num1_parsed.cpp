#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
int fennec = 0, snuke = 0;
bool visited[100005];

void dfs(int node, int parent, int color) {
    visited[node] = true;
    if (color == 0) {
        fennec++;
    } else {
        snuke++;
    }
    for (int i = 0; i < adj[node].size(); i++) {
        int child = adj[node][i];
        if (!visited[child]) {
            dfs(child, node, 1 - color);
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, -1, 0);
    if (fennec > snuke) {
        cout << "Fennec" << endl;
    } else {
        cout << "Snuke" << endl;
    }
    return 0;
}