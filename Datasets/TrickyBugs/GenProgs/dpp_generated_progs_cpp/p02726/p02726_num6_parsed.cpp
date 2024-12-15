#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> findShortestDistance(int N, int X, int Y) {
    vector<int> dist(N, -1);
    queue<int> q;
    dist[X - 1] = 0;
    q.push(X - 1);

    vector<vector<int>> adj(N);
    for (int i = 0; i < N - 1; i++) {
        adj[i].push_back(i + 1);
        adj[i + 1].push_back(i);
    }
    adj[X - 1].push_back(Y - 1);
    adj[Y - 1].push_back(X - 1);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int next : adj[curr]) {
            if (dist[next] == -1) {
                dist[next] = dist[curr] + 1;
                q.push(next);
            }
        }
    }

    return dist;
}

void solve(int N, int X, int Y) {
    vector<int> shortestDist = findShortestDistance(N, X, Y);

    vector<int> ans(N - 1, 0);
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int shortest = shortestDist[j] - shortestDist[i];
            ans[shortest]++;
        }
    }

    for (int k = 1; k < N; k++) {
        cout << ans[k] << endl;
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    solve(N, X, Y);

    return 0;
}