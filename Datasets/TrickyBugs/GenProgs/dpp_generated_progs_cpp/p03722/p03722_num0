#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<pair<int, int>>> graph(N);

    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a - 1].push_back({b - 1, c});
    }

    vector<int> dist(N, -INF);
    dist[0] = 0;

    vector<bool> inQueue(N, false);
    vector<int> cnt(N, 0);

    queue<int> q;
    q.push(0);
    inQueue[0] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        inQueue[u] = false;

        for (auto edge : graph[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w > dist[v]) {
                dist[v] = dist[u] + w;
                cnt[v] = cnt[u] + 1;

                if (cnt[v] >= N) {
                    cout << "inf" << endl;
                    return 0;
                }

                if (!inQueue[v]) {
                    q.push(v);
                    inQueue[v] = true;
                }
            }
        }
    }

    cout << dist[N - 1] << endl;

    return 0;
}