#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_N = 50;

int N, M;
vector<int> graph[MAX_N + 5];
bool visited[MAX_N + 5];
bool is_bridge[MAX_N + 5][MAX_N + 5];

void dfs(int u, int parent) {
    visited[u] = true;

    for (int v : graph[u]) {
        if (v == parent) { // Skip the parent vertex
            continue;
        }

        if (!visited[v]) {
            dfs(v, u);
        }

        if (visited[v]) {
            is_bridge[u][v] = is_bridge[v][u] = false;
        }
    }
}

int countBridges() {
    int cnt = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            if (is_bridge[i][j]) {
                cnt++;
            }
        }
    }

    return cnt;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
        is_bridge[a][b] = is_bridge[b][a] = true;
    }

    dfs(1, -1);

    int result = countBridges();

    cout << result << endl;

    return 0;
}