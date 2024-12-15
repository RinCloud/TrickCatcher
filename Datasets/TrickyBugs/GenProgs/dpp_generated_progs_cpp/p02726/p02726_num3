#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> bfs(int n, int start, int k, const vector<vector<int>>& adj) {
    vector<int> dist(n + 1, -1);
    queue<int> q;
    q.push(start);
    dist[start] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int next : adj[node]) {
            if (dist[next] == -1) {
                dist[next] = dist[node] + 1;
                q.push(next);
            }
        }
    }

    vector<int> pairs(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (dist[i] + dist[j] == k) {
                pairs[k]++;
            }
        }
    }

    return pairs;
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<vector<int>> adj(N + 1);
    for (int i = 1; i < N; i++) {
        adj[i].push_back(i + 1);
        adj[i + 1].push_back(i);
    }
    adj[X].push_back(Y);
    adj[Y].push_back(X);

    for (int k = 1; k < N; k++) {
        vector<int> pairs = bfs(N, 1, k, adj);
        cout << accumulate(pairs.begin(), pairs.end(), 0) << endl;
    }

    return 0;
}