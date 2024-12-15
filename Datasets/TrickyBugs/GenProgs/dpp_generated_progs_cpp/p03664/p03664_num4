#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int N, M;
vector<vector<pair<int, int>>> adj;
vector<bool> visited;

int dfs(int u, int prev) {
    if (u == N - 1) {
        return 0;
    }
    visited[u] = true;
    int cost = INT_MAX;
    for (auto edge : adj[u]) {
        int v = edge.first;
        int c = edge.second;
        if (!visited[v] && v != prev) {
            cost = min(cost, dfs(v, u) + c);
        }
    }
    visited[u] = false;
    return cost;
}

int main() {
    cin >> N >> M;
    adj.resize(N);
    visited.resize(N, false);
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    int minBudget = dfs(0, -1);
    cout << minBudget << endl;

    return 0;
}