#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<bool> visited;
vector<vector<int>> adj;

void bfs(int start, vector<int>& dist) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    dist[start] = 0;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int u : adj[v]) {
            if (!visited[u]) {
                visited[u] = true;
                dist[u] = dist[v] + 1;
                q.push(u);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    adj.resize(N + 1);
    visited.resize(N + 1);

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> fennecDist(N + 1);
    vector<int> snukeDist(N + 1);

    bfs(1, fennecDist); // calculate distances from Cell 1
    bfs(N, snukeDist);  // calculate distances from Cell N

    int fennecCount = 0;
    int snukeCount = 0;

    // Count the number of cells reachable by Fennec and Snuke respectively
    for (int i = 1; i <= N; i++) {
        if (fennecDist[i] <= snukeDist[i])
            fennecCount++;
        else
            snukeCount++;
    }

    if (fennecCount > snukeCount)
        cout << "Fennec" << endl;
    else
        cout << "Snuke" << endl;

    return 0;
}