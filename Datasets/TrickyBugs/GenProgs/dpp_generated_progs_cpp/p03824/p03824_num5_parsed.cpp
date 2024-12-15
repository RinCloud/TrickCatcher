#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<int> subtreeSize;

void dfs(int node, int parent) {
    for (int child : adj[node]) {
        if (child == parent)
            continue;
        dfs(child, node);
        subtreeSize[node] = max(subtreeSize[node], subtreeSize[child]);
    }
    subtreeSize[node]++;
}

int main() {
    int N;
    cin >> N;

    adj.resize(N + 1);
    subtreeSize.resize(N + 1, 0);

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1, 0);

    int minK = 0;
    for (int child : adj[1]) {
        minK = max(minK, subtreeSize[child]);
    }

    cout << minK << endl;

    return 0;
}