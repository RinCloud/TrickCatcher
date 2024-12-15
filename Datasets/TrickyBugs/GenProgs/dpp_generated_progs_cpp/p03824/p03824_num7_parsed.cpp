#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
int subtree[100005];

void dfs(int v, int parent) {
    subtree[v] = 1;
    for(int u : adj[v]) {
        if(u != parent) {
            dfs(u, v);
            subtree[v] += subtree[u];
        }
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    dfs(1, -1);
    
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans = max(ans, subtree[i]);
    }
    
    cout << ans-1 << endl;
    
    return 0;
}