#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int factorial(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res = (res * i) % MOD;
    }
    return res;
}

int power(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        y >>= 1;
    }
    return res;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> visited(N + 1, false);
    int components = 0;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            components++;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                for (int neighbor : adj[node]) {
                    if (!visited[neighbor]) {
                        q.push(neighbor);
                        visited[neighbor] = true;
                    }
                }
            }
        }
    }

    int ans = power(K, components);
    ans = (ans * factorial(components)) % MOD;
    cout << ans << endl;

    return 0;
}