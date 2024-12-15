#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> graph[51];
bool black[51];
bool visited[51];

void dfs(int v) {
    visited[v] = true;

    for (int u : graph[v]) {
        if (!visited[u]) {
            if (black[v]) {
                black[u] = true;
            }
            dfs(u);
        }
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int M;
    cin >> M;

    memset(black, false, sizeof(black));
    memset(visited, false, sizeof(visited));

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;

        black[u] = true;
        dfs(u);
    }

    int count = 0;

    for (int i = 1; i <= N; i++) {
        if (black[i]) {
            count++;
        }
    }

    long long ans = 1;

    for (int i = 0; i < count; i++) {
        ans *= 2;
    }

    cout << ans << endl;

    return 0;
}