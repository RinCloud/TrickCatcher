#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct Edge {
    int v;
    int cost;
    int time;
};

vector<vector<Edge>> graph;
vector<int> silver;
vector<int> exchangeTime;

void dijkstra(int src, vector<int>& dist) {
    dist[src] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, src));

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto& neighbor : graph[u]) {
            if (dist[u] + neighbor.time < dist[neighbor.v]) {
                dist[neighbor.v] = dist[u] + neighbor.time;
                pq.push(make_pair(dist[neighbor.v], neighbor.v));
            }
        }
    }
}

int main() {
    int N, M, S;
    cin >> N >> M >> S;

    graph.resize(N + 1);
    silver.resize(N + 1, 0);
    exchangeTime.resize(N + 1, INT_MAX);

    for (int i = 0; i < M; i++) {
        int U, V, A, B;
        cin >> U >> V >> A >> B;

        graph[U].push_back({ V, A, B });
        graph[V].push_back({ U, A, B });
    }

    for (int i = 1; i <= N; i++) {
        cin >> silver[i] >> exchangeTime[i];
    }

    vector<vector<int>> dist(N + 1, vector<int>(N + 1, INT_MAX));
    for (int i = 1; i <= N; i++) {
        dist[i][i] = 0;
        dijkstra(i, dist[i]);
    }

    for (int t = 2; t <= N; t++) {
        int minTime = INT_MAX;

        for (int i = 1; i <= N; i++) {
            if (dist[1][i] != INT_MAX && dist[i][t] != INT_MAX) {
                int time = dist[1][i] + (silver[i] >= dist[i][t] ? 0 : (dist[i][t] - silver[i]) * exchangeTime[i]);
                minTime = min(minTime, time);
            }
        }
        cout << minTime << endl;
    }

    return 0;
}