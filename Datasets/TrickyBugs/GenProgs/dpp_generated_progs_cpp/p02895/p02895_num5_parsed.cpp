#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

bool dfs(int u, int N) {
    visited[u] = true;
    int cnt = 0;
    for (int v = 0; v < 2 * N; v++) {
        if (adj[u][v] && !visited[v]) {
            if (cnt == 1) {
                return false;
            }
            cnt++;
            if (!dfs(v, N)) {
                return false;
            }
        }
    }
    return true;
}

int solve(int N) {
    int ans = 0;
    for (int mask = 1; mask < (1 << (2 * N)); mask++) {
        if (__builtin_popcount(mask) != N) {
            continue;
        }
        adj.assign(2 * N, vector<int>(2 * N, 0));
        visited.assign(2 * N, false);
        for (int i = 0; i < 2 * N; i++) {
            if (mask & (1 << i)) {
                for (int j = 0; j < 2 * N; j++) {
                    if (mask & (1 << j)) {
                        adj[i][j] = 1;
                    }
                }
            }
        }
        bool valid = true;
        for (int i = 0; i < 2 * N; i++) {
            if (!visited[i] && !dfs(i, N)) {
                valid = false;
                break;
            }
        }
        if (valid) {
            ans++;
        }
    }
    return ans;
}

int main() {
    int N;
    cin >> N;
    adj.resize(2 * N, vector<int>(2 * N));
    for (int i = 0; i < 2 * N; i++) {
        for (int j = 0; j < 2 * N; j++) {
            char c;
            cin >> c;
            adj[i][j] = c - '0';
        }
    }
    cout << solve(N) << endl;
    return 0;
}