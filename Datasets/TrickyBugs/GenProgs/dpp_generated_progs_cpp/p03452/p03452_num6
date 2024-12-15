#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Edge {
    int to;
    long long dist;
};

vector<vector<Edge>> graph;
vector<long long> position;

bool bfs(int start, int n) {
    queue<int> q;
    vector<bool> visited(n + 1, false);
    visited[start] = true;
    q.push(start);

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(auto edge : graph[u]) {
            int v = edge.to;
            long long weight = edge.dist;

            if(!visited[v]) {
                visited[v] = true;
                q.push(v);
                position[v] = position[u] + weight;
            } else if(position[v] != position[u] + weight) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    graph = vector<vector<Edge>>(n + 1);
    position = vector<long long>(n + 1);

    for(int i = 1; i <= m; i++) {
        int l, r, d;
        cin >> l >> r >> d;

        graph[l].push_back({r, d});
        graph[r].push_back({l, -d});
    }

    for(int i = 1; i <= n; i++) {
        if(!position[i] && !bfs(i, n)) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}