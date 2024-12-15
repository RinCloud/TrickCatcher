#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAXN = 100005;
vector<pair<int,int>> adj[MAXN];
int val[MAXN];
bool vis[MAXN];
bool solve(int u, int x){
    if (vis[u]){
        return val[u] == x;
    }
    vis[u] = true, val[u] = x;
    for (auto C : adj[u]){
        if (!solve(C.first, x + C.second)) return false; 
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++){
        int u, v, dist; cin >> u >> v >> dist;
        adj[u].emplace_back(v, dist);
        adj[v].emplace_back(u, -dist);
    }
    for (int i = 1; i <= n; i++){
        if (!vis[i]){
            if(!solve(i, 0)){
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}