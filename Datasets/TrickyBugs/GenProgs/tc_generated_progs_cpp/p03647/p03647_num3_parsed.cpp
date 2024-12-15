#include <cstdio>
#include <vector>

int N, M;
int a[200001], b[200001];

std::vector<int> graph[200001];
bool visited[200001];

bool dfs(int node) {
    visited[node] = true;
    if (node == N) {
        return true;
    }
    for (int i = 0; i < graph[node].size(); i++) {
        int nextNode = graph[node][i];
        if (!visited[nextNode] && dfs(nextNode)) {
            return true;
        }
    }
    return false;
}

int main() {
    scanf("%d%d", &N, &M);
    for (int i = 1; i <= M; i++) {
        scanf("%d%d", &a[i], &b[i]);
        graph[a[i]].push_back(b[i]);
        graph[b[i]].push_back(a[i]);
    }

    for (int i = 0; i < graph[1].size(); i++) {
        int neighbor = graph[1][i];
        visited[neighbor] = true;
        for (int j = 0; j < graph[neighbor].size(); j++) {
            visited[graph[neighbor][j]] = true;
        }
    }

    bool possible = dfs(1);
    printf("%s\n", possible ? "POSSIBLE" : "IMPOSSIBLE");

    return 0;
}
