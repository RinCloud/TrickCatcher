#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<int> color;
int cnt;

void dfs(int u, int parent) {
    if (color[u] == 1) {
        color[u] = 0;
        cnt++;
    }
    for (int v : adj[u]) {
        if (v == parent) continue;
        dfs(v, u);
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    
    adj.resize(N + 1);
    color.resize(N + 1, 1);
    
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    dfs(1, 0);
    
    if (cnt == N) {
        cout << cnt - 1 << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}