#include<bits/stdc++.h>
using namespace std;

vector<int> adj[51];
bool visited[51];
int parent[51];
int low[51];
int disc[51];
int n;
int bridges;

void dfs(int v){
    static int time = 0;
    visited[v] = true;
    disc[v] = low[v] = ++time;
    for(int i = 0; i<adj[v].size();i++){
        int u = adj[v][i];
        if(!visited[u]){
            parent[u] = v;
            dfs(u);
            low[v] = min(low[v],low[u]);
            if(low[u] > disc[v]){
                bridges++;
            }
        }
        else if(u != parent[v]){
            low[v] = min(low[v],disc[u]);
        }
    }
}

int main(){
    int m;
    cin >> n >> m;
    for(int i = 0; i<m;i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    cout << bridges << endl;
    return 0;
}