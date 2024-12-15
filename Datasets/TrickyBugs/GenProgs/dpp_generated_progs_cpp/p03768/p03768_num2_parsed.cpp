#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX_N = 100005;

vector<int> graph[MAX_N];
int colors[MAX_N];

void bfs(int v, int d, int c) {
    queue<int> q;
    q.push(v);
    colors[v] = c;

    int dist[MAX_N] = {0};
    bool visited[MAX_N] = {false};
    visited[v] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (dist[u] == d) {
            continue;
        }

        for (int neighbor : graph[u]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
                colors[neighbor] = c;
                dist[neighbor] = dist[u] + 1;
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int v, d, c;
        cin >> v >> d >> c;

        bfs(v, d, c);
    }

    for (int i = 1; i <= N; ++i) {
        cout << colors[i] << endl;
    }

    return 0;
}