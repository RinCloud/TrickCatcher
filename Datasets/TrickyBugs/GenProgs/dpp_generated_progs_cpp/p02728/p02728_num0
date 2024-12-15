#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

vector<vector<int>> adj;

long long dfs(int u, int parent) {
    long long result = 1;
    for (int v : adj[u]) {
        if (v != parent) {
            result = (result * dfs(v, u) + 1) % MOD;
        }
    }
    return result;
}

int main() {
    int N;
    cin >> N;
    adj.resize(N + 1);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int k = 1; k <= N; k++) {
        long long result = dfs(k, 0);
        cout << result << endl;
    }

    return 0;
}