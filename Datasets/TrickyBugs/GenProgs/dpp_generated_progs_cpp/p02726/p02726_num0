#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<vector<int>> G(N + 1); // Adjacency list graph representation
    for (int i = 1; i < N; i++) {
        G[i].push_back(i + 1);
        G[i + 1].push_back(i);
    }
    G[X].push_back(Y);
    G[Y].push_back(X);

    for (int k = 1; k <= N - 1; k++) {
        vector<int> dist(N + 1, -1); // Distance from source to each vertex
        vector<int> count(N + 1, 0); // Number of pairs with distance k
        queue<int> q;

        dist[k] = 0; // Start BFS from vertex k
        q.push(k);

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int v : G[u]) {
                if (dist[v] == -1) {
                    dist[v] = dist[u] + 1;
                    q.push(v);

                    if (dist[v] <= N - 1) {
                        count[dist[v]]++;
                    }
                }
            }
        }

        int totalPairs = 0;
        for (int i = 1; i <= N - 1; i++) {
            totalPairs += count[i] / 2;
        }
        cout << totalPairs << endl;
    }

    return 0;
}