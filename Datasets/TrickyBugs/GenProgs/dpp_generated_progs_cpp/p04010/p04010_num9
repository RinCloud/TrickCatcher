#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> adj[100005];
bool visited[100005];
bool color[100005];
int whiteCount, blackCount;

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (color[current]) {
            blackCount++;
        } else {
            whiteCount++;
        }

        for (int i = 0; i < adj[current].size(); i++) {
            int neighbor = adj[current][i];
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                color[neighbor] = !color[current]; // invert the color
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1);

    if (whiteCount == 0 || blackCount == 0) {
        cout << -1 << endl;
    } else {
        cout << blackCount << endl;
    }

    return 0;
}