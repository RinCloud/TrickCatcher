#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    string s;
    cin >> s;

    vector<int> colors(N + 1, 0);
    for (int i = 0; i < N; i++) {
        if (s[i] == '1') {
            colors[i + 1] = 1;
        }
    }

    vector<int> distances(N + 1, -1);
    distances[1] = 0;

    queue<int> q;
    q.push(1);

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int u : adj[v]) {
            if (distances[u] == -1) {
                distances[u] = distances[v] + 1;
                q.push(u);
            }
        }
    }

    int result = 0;
    for (int i = 1; i <= N; i++) {
        if (colors[i] == 1 && distances[i] <= distances[N]) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}