#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

vector<vector<int>> adj;
vector<bool> visited;

int power(int base, int expo) {
    int result = 1;
    while (expo > 0) {
        if (expo % 2 == 1)
            result = (1LL * result * base) % MOD;
        base = (1LL * base * base) % MOD;
        expo /= 2;
    }
    return result;
}

void dfs(int u, vector<int>& colorCnt, vector<int>& cycleSize) {
    visited[u] = true;
    cycleSize.push_back(u);
    for (int v : adj[u]) {
        if (!visited[v])
            dfs(v, colorCnt, cycleSize);
    }
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    adj.resize(N + 1);
    visited.resize(N + 1, false);
    vector<int> colorCnt(K + 1, 0);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int ans = 1;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            vector<int> cycleSize;
            dfs(i, colorCnt, cycleSize);

            int cycleColors = 0;
            for (int col : cycleSize) {
                colorCnt[col]++;
                if (colorCnt[col] == 1)
                    cycleColors++;
            }

            ans = (1LL * ans * power(K, cycleColors)) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}