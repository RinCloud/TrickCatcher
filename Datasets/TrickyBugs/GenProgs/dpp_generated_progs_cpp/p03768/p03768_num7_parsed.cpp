#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAXN = 100005;
vector<int> graph[MAXN];
int colors[MAXN];

void repaintVertices(int v, int d, int c) {
    vector<bool> visited(MAXN, false);
    queue<pair<int, int>> q;
    q.push({v, 0});
    visited[v] = true;

    while (!q.empty()) {
        int currVertex = q.front().first;
        int currDistance = q.front().second;
        q.pop();
        colors[currVertex] = c;

        if (currDistance < d) {
            for (int adjVertex : graph[currVertex]) {
                if (!visited[adjVertex]) {
                    q.push({adjVertex, currDistance + 1});
                    visited[adjVertex] = true;
                }
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int v, d, c;
        cin >> v >> d >> c;
        repaintVertices(v, d, c);
    }

    for (int i = 1; i <= N; i++) {
        cout << colors[i] << endl;
    }

    return 0;
}