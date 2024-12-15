#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[51];
bool black[51][51];

int dfs(int u, int v) {
    int count = 0;
    for (int child : adj[u]) {
        if (child == v) continue;
        int temp = dfs(child, u);
        count += temp;
        if (black[u][child]) count++;
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        black[u][v] = black[v][u] = true;
    }

    int answer = dfs(1, 0);
    cout << (1 << (N - 1)) - answer << endl;

    return 0;
}