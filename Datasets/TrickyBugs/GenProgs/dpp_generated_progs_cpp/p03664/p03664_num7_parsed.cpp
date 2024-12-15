#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Edge {
    int dest;
    int cost;
    bool removed;
};

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<Edge>> graph(N);
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;

        graph[a].push_back({b, c, false});
        graph[b].push_back({a, c, false});
    }

    int answer = INT_MAX;
    for (int removeMask = 0; removeMask < (1 << M); removeMask++) {
        for (int i = 0; i < N; i++) {
            for (auto& edge : graph[i]) {
                edge.removed = false;
            }
        }

        for (int i = 0; i < M; i++) {
            if (removeMask & (1 << i)) {
                graph[i / (N - 1)][i % (N - 1)].removed = true;
            }
        }

        queue<int> bfsQueue;
        vector<bool> visited(N, false);
        bfsQueue.push(0);
        visited[0] = true;

        while (!bfsQueue.empty()) {
            int current = bfsQueue.front();
            bfsQueue.pop();

            for (const auto& edge : graph[current]) {
                if (!edge.removed && !visited[edge.dest]) {
                    bfsQueue.push(edge.dest);
                    visited[edge.dest] = true;
                }
            }
        }

        if (visited[N - 1]) {
            int totalCost = 0;
            for (int i = 0; i < N; i++) {
                for (const auto& edge : graph[i]) {
                    if (edge.removed) {
                        totalCost += edge.cost;
                    }
                }
            }
            answer = min(answer, totalCost);
        }
    }

    cout << answer << endl;

    return 0;
}