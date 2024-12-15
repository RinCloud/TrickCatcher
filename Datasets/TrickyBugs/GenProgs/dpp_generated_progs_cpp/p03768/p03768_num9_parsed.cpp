#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX_N = 100005;

vector<int> adj[MAX_N];
int color[MAX_N];

void bfs(int v, int d, int c) {
    queue<pair<int, int>> q; // node, distance

    q.push({v, 0});
    color[v] = c;

    while (!q.empty()) {
        int node = q.front().first;
        int dist = q.front().second;
        q.pop();

        if (dist == d) {
            continue;
        }

        for (int neighbor : adj[node]) {
            if (color[neighbor] == 0) {
                color[neighbor] = c;
                q.push({neighbor, dist + 1});
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i) {
        int v, d, c;
        cin >> v >> d >> c;
        bfs(v, d, c);
    }

    for (int i = 1; i <= N; ++i) {
        cout << color[i] << endl;
    }

    return 0;
}