#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> adj;
vector<int> color;

void bfs(int start, int c) {
    queue<int> q;
    q.push(start);
    color[start] = c;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int next : adj[curr]) {
            if (color[next] == 0) {
                q.push(next);
                color[next] = c;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    adj.resize(N + 1);
    color.resize(N + 1);

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1, 1);
    bfs(N, -1);

    int fennec = 0, snuke = 0;
    for (int c : color) {
        if (c == 1) fennec++;
        else if (c == -1) snuke++;
    }

    if (fennec > snuke) cout << "Fennec";
    else cout << "Snuke";

    return 0;
}