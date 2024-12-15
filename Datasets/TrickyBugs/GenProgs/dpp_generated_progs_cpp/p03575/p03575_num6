#include<bits/stdc++.h>
using namespace std;

vector<int> adj[51];
vector<bool> visited;
vector<int> tin, low;
int timer;
set<pair<int, int>> bridges;

void dfs(int v, int p = -1) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    for (int to : adj[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v]) {
                bridges.insert(make_pair(min(v, to), max(v, to)));
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    visited.assign(N+1, false);
    tin.assign(N+1, -1);
    low.assign(N+1, -1);
    timer = 0;
    for (int i = 1; i <= N; ++i) {
        if (!visited[i])
            dfs(i);
    }
    
    cout << bridges.size() << endl;

    return 0;
}