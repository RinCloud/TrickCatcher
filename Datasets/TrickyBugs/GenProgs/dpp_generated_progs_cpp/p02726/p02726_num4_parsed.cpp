#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int MAX = 2005;

vector<int> adj[MAX];
int dist[MAX][MAX];

void bfs(int src, int N) {
    queue<int> q;
    q.push(src);

    memset(dist[src], -1, sizeof(dist[src]));
    dist[src][src] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (dist[src][v] == -1) {
                dist[src][v] = dist[src][u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    for (int i = 1; i < N; i++) {
        adj[i].push_back(i + 1);
        adj[i + 1].push_back(i);
    }

    adj[X].push_back(Y);
    adj[Y].push_back(X);

    for (int i = 1; i <= N; i++) {
        bfs(i, N);
    }

    vector<int> count(N, 0);

    for (int k = 1; k < N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = i + 1; j <= N; j++) {
                if (dist[i][j] == k) {
                    count[k]++;
                }
            }
        }
    }

    for (int k = 1; k < N; k++) {
        cout << count[k] << endl;
    }

    return 0;
}