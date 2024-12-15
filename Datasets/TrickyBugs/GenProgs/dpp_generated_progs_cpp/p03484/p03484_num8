#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void bfs(int src, int& count, int& diameter) {
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        count++;

        for (int v : adj[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }

        if (adj[u].size() == 1) {
            diameter = count;
        }
    }
}

int main() {
    int N;
    cin >> N;

    adj.resize(N + 1);
    visited.resize(N + 1, false);

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int A = 0, B = 0;

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            int count = 0;
            int diameter = 0;
            bfs(i, count, diameter);

            A = max(A, diameter - 1);
            B = max(B, (diameter + 1) / 2);
        }
    }

    cout << A << " " << B << endl;

    return 0;
}