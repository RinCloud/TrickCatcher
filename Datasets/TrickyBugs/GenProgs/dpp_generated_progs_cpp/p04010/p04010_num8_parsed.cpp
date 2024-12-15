#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to perform BFS traversal on the graph
void bfs(int start, vector<int> adj[], vector<bool>& visited, vector<int>& colorChange) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int i = 0; i < adj[curr].size(); i++) {
            int neighbor = adj[curr][i];

            if (!visited[neighbor]) {
                q.push(neighbor);
                colorChange[neighbor] = colorChange[curr] + 1;
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> adj[N + 1];
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> visited(N + 1, false);
    vector<int> colorChange(N + 1, 0);

    // Perform BFS traversal from vertex 1
    bfs(1, adj, visited, colorChange);

    bool possible = true;
    int minOperations = 0;

    // Check if it is possible to turn all vertices black
    for (int i = 2; i <= N; i++) {
        if (colorChange[i] % 2 != 0) {
            possible = false;
            break;
        }
        minOperations += colorChange[i] / 2;
    }

    // Print the minimum number of operations or -1 if not possible
    if (possible) {
        cout << minOperations << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}