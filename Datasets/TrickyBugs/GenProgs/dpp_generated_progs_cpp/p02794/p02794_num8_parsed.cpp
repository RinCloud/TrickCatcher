#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<int>> adj;
vector<int> color;
int countWays;

void dfs(int u, int p) {
    unordered_set<int> black;
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        if (color[v] == 1) black.insert(v);
    }
    if (black.size() == 0) {
        color[u] = 1;
        countWays *= 2;
    } else if (black.size() == 1) {
        color[u] = 0;
    } else {
        color[u] = 1;
        countWays *= 2;
        countWays %= int(1e9 + 7);
    }
}

int main() {
    int N;
    cin >> N;

    adj.resize(N + 1);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int M;
    cin >> M;

    countWays = 1;
    color.resize(N + 1, -1);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        color[u] = color[v] = 1;
    }

    dfs(1, -1);

    cout << countWays << endl;

    return 0;
}