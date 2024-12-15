#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct ExchangeCounter {
    long long silver;
    long long time;
};

struct Edge {
    int to;
    int silverCost;
    int timeCost;
};

void dijkstra(int start, int N, vector<vector<Edge>>& graph, vector<long long>& minTime) {
    minTime[start] = 0;

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push(make_pair(0, start));

    while (!pq.empty()) {
        int u = pq.top().second;
        long long timeU = pq.top().first;
        pq.pop();

        if (timeU > minTime[u]) {
            continue;
        }

        for (Edge& edge : graph[u]) {
            int v = edge.to;
            int silverCost = edge.silverCost;
            int timeCost = edge.timeCost;

            long long timeV = minTime[u] + timeCost;
            if (timeV < minTime[v] && silverCost <= minTime[u]) {
                minTime[v] = timeV;
                pq.push(make_pair(timeV, v));
            }
        }
    }
}

int main() {
    int N, M, S;
    cin >> N >> M >> S;

    vector<vector<Edge>> graph(N + 1);
    for (int i = 0; i < M; i++) {
        int U, V, A, B;
        cin >> U >> V >> A >> B;
        graph[U].push_back({V, A, B});
        graph[V].push_back({U, A, B});
    }

    vector<ExchangeCounter> exchangeCounters(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> exchangeCounters[i].silver >> exchangeCounters[i].time;
    }

    vector<long long> minTime(N + 1, LLONG_MAX);

    dijkstra(1, N, graph, minTime);

    for (int t = 2; t <= N; t++) {
        long long timeNeeded = minTime[t] + exchangeCounters[t].time;
        cout << timeNeeded << endl;
    }

    return 0;
}