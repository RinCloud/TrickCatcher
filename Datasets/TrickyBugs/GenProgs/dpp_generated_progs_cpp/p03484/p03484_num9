#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> adj(N + 1, vector<int>());
    vector<int> degree(N + 1, 0);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        degree[a]++;
        degree[b]++;
    }

    queue<int> q;
    for (int i = 1; i <= N; i++) {
        if (degree[i] == 1)
            q.push(i);
    }

    int A = 0, B = 0;
    while (!q.empty()) {
        int size = q.size();
        A = max(A, size);
        B++;

        for (int i = 0; i < size; i++) {
            int node = q.front();
            q.pop();

            for (int neighbor : adj[node]) {
                degree[neighbor]--;
                if (degree[neighbor] == 1)
                    q.push(neighbor);
            }
        }
    }

    cout << A - 1 << " " << B - 1 << endl;

    return 0;
}