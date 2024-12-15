#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;
const long long BASE = 1000000000000000000LL;

vector<vector<int>> graph;
vector<int> independentSet;
vector<bool> visited;

void dfs(int node) {
    visited[node] = true;
    independentSet.push_back(node);

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

long long calculateWeight(int x, int y, int z) {
    long long weight = 1;
    weight = (weight * BASE) % MOD;
    weight = (weight * BASE) % MOD;
    weight = (weight * BASE) % MOD;

    weight = (weight * BASE) % MOD;
    weight = (weight * BASE) % MOD;
    weight = (weight * BASE) % MOD;

    weight = (weight * BASE) % MOD;
    weight = (weight * BASE) % MOD;
    weight = (weight * BASE) % MOD;

    weight = (weight * BASE) % MOD;
    weight = (weight * BASE) % MOD;
    weight = (weight * BASE) % MOD;

    return weight;
}

int main() {
    int N;
    cin >> N;

    graph.resize(N * N * N);
    visited.resize(N * N * N, false);

    int M1;
    cin >> M1;
    for (int i = 0; i < M1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        for (int w = 0; w < N; w++) {
            for (int l = 0; l < N; l++) {
                graph[a * N * N + w * N + l].push_back(b * N * N + w * N + l);
                graph[b * N * N + w * N + l].push_back(a * N * N + w * N + l);
            }
        }
    }

    int M2;
    cin >> M2;
    for (int i = 0; i < M2; i++) {
        int c, d;
        cin >> c >> d;
        c--;
        d--;

        for (int w = 0; w < N; w++) {
            for (int l = 0; l < N; l++) {
                graph[w * N * N + c * N + l].push_back(w * N * N + d * N + l);
                graph[w * N * N + d * N + l].push_back(w * N * N + c * N + l);
            }
        }
    }

    int M3;
    cin >> M3;
    for (int i = 0; i < M3; i++) {
        int e, f;
        cin >> e >> f;
        e--;
        f--;

        for (int w = 0; w < N; w++) {
            for (int l = 0; l < N; l++) {
                graph[w * N * N + l * N + e].push_back(w * N * N + l * N + f);
                graph[w * N * N + l * N + f].push_back(w * N * N + l * N + e);
            }
        }
    }

    long long totalWeight = 0;
    for (int i = 0; i < N * N * N; i++) {
        if (!visited[i]) {
            independentSet.clear();
            dfs(i);

            int count = independentSet.size();
            long long weight = calculateWeight(count / (N * N), (count / N) % N, count % N);
            totalWeight = (totalWeight + weight) % MOD;
        }
    }

    cout << totalWeight << endl;

    return 0;
}