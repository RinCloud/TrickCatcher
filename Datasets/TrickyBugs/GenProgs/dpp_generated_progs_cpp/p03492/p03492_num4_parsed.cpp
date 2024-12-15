#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

vector<vector<int>> adj;
vector<bool> visited;
vector<long long> subtreeSize;
long long answer;

void dfs(int node) {
    visited[node] = true;
    subtreeSize[node] = 1;

    for (int child : adj[node]) {
        if (!visited[child]) {
            dfs(child);
            subtreeSize[node] += subtreeSize[child];
        }
    }
}

long long power(long long base, long long exponent) {
    long long result = 1;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
            result %= MOD;
        }

        base *= base;
        base %= MOD;

        exponent /= 2;
    }

    return result;
}

long long mul(long long a, long long b) {
    return (a * b) % MOD;
}

void solve(int node, long long parent_to_node, long long node_to_parent) {
    answer += mul(node_to_parent, power(parent_to_node, MOD - 2));
    answer %= MOD;

    for (int child : adj[node]) {
        if (child == 0) continue;

        long long child_to_node = subtreeSize[child];
        long long new_parent_to_node = mul(parent_to_node + node_to_parent - child_to_node, power(parent_to_node, MOD - 2));

        solve(child, child_to_node, new_parent_to_node);
    }
}

int main() {
    int N;
    cin >> N;

    adj.resize(N + 1);
    visited.resize(N + 1);
    subtreeSize.resize(N + 1);

    for (int i = 0; i < N - 1; i++) {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);

    answer = 0;
    solve(1, 0, 0);
    answer = mul(answer, power(N, MOD - 2));

    cout << answer << endl;

    return 0;
}