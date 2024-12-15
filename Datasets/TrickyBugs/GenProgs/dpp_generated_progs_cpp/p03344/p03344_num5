#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const long long INF = 1e18;

struct Vertex {
    long long a, b;
    vector<int> adj;
};

vector<Vertex> graph;
vector<long long> minMoney;

void findMinMoney(int start) {
    minMoney[start] = graph[start].a;
    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int next : graph[curr].adj) {
            if (minMoney[next] > max(minMoney[curr], graph[next].a)) {
                minMoney[next] = max(minMoney[curr], graph[next].a);
                q.push(next);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    graph.resize(n + 1);
    minMoney.resize(n + 1, INF);

    for (int i = 1; i <= n; i++) {
        cin >> graph[i].a >> graph[i].b;
    }

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].adj.push_back(v);
        graph[v].adj.push_back(u);
    }

    findMinMoney(1);

    long long minInitialMoney = INF;
    for (int i = 1; i <= n; i++) {
        minInitialMoney = min(minInitialMoney, minMoney[i] + graph[i].b);
    }

    cout << minInitialMoney << endl;

    return 0;
}