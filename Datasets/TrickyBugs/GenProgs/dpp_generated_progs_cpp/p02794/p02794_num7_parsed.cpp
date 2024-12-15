#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> adj[51];
bool black[51];
int ans;

void dfs(int u, int parent, int cnt_black) {
    if (black[u]) cnt_black++;
    if (cnt_black >= M) return;
    if (parent != -1 && adj[u].size() == 1) {
        ans++;
        return;
    }
    for (int v : adj[u]) {
        if (v == parent) continue;
        dfs(v, u, cnt_black);
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        black[u] = true;
        black[v] = true;
    }
    ans = 0;
    for (int u : adj[1]) {
        dfs(u, 1, 0);
    }
    cout << ans << endl;
    return 0;
}