#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct Edge {
    int v, a, b;
};

struct Exchange {
    int c, d;
};

struct Node {
    int city;
    int silver;
    long long time;

    bool operator<(const Node& other) const {
        return time > other.time;
    }
};

int main() {
    int N, M, S;
    cin >> N >> M >> S;

    vector<vector<Edge>> graph(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v, a, b;
        cin >> u >> v >> a >> b;
        graph[u].push_back({v, a, b});
        graph[v].push_back({u, a, b});
    }

    vector<Exchange> exchanges(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> exchanges[i].c >> exchanges[i].d;
    }

    vector<long long> minTime(N + 1, LLONG_MAX);
    priority_queue<Node> pq;
    pq.push({1, S, 0});
    minTime[1] = 0;

    while (!pq.empty()) {
        Node curr = pq.top();
        pq.pop();

        if (curr.time > minTime[curr.city]) {
            continue;
        }

        for (const Edge& e : graph[curr.city]) {
            long long newTime = curr.time + e.b;
            if (newTime < minTime[e.v] && curr.silver >= e.a) {
                minTime[e.v] = newTime;
                pq.push({e.v, curr.silver - e.a, newTime});
            }
        }

        long long exchangeTime = curr.time;
        for (int i = 1; i <= N; i++) {
            if (curr.silver >= exchanges[i].c) {
                long long newTime = exchangeTime + exchanges[i].d;
                if (newTime < minTime[i]) {
                    minTime[i] = newTime;
                    pq.push({i, curr.silver - exchanges[i].c, newTime});
                }
            }
        }
    }

    for (int t = 2; t <= N; t++) {
        cout << minTime[t] << endl;
    }

    return 0;
}