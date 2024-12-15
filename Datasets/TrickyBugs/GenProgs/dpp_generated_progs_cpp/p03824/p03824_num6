#include <iostream>
#include <vector>

using namespace std;

vector<int> adj[100001];
int subtree_size[100001];

void dfs(int u, int p) {
    subtree_size[u] = 1;
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u);
            subtree_size[u] += subtree_size[v];
        }
    }
}

int find_minimum_k(int n) {
    dfs(1, -1);
    int k = 0;
    for (int u = 1; u <= n; u++) {
        int max_size = -1;
        for (int v : adj[u]) {
            if (v != 1) {
                max_size = max(max_size, subtree_size[v]);
            }
        }
        max_size = max(max_size, n - subtree_size[u]);
        k = max(k, max_size);
    }
    return k;
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
    int k = find_minimum_k(n);
    cout << k << endl;
    return 0;
}