#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<int> uninity;

void dfs(int v, int parent) {
    int maxUninity = 0;
    for (int u : adj[v]) {
        if (u == parent) continue;
        dfs(u, v);
        maxUninity = max(maxUninity, uninity[u]);
    }
    uninity[v] = maxUninity + 1;
}

int main() {
    int N;
    cin >> N;
    
    adj.resize(N + 1);
    uninity.resize(N + 1);
    
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    dfs(1, -1);
    
    int minUninity = INT_MAX;
    for (int i = 1; i <= N; i++) {
        minUninity = min(minUninity, uninity[i]);
    }
    
    cout << minUninity << endl;
    
    return 0;
}