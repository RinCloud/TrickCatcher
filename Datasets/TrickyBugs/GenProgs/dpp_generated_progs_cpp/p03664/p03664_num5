#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<pair<int, int>>> graph(N+1);

    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }

    vector<vector<int>> dp(1 << N, vector<int>(N+1, INF));
    dp[1][1] = 0;

    for (int mask = 0; mask < (1 << N); mask++) {
        for (int u = 1; u <= N; u++) {
            if (dp[mask][u] == INF)
                continue;

            for (auto [v, cost] : graph[u]) {
                if (mask & (1 << (v-1)) || dp[mask][u] + cost >= dp[mask | (1 << (v-1))][v])
                    continue;

                dp[mask | (1 << (v-1))][v] = dp[mask][u] + cost;
            }
        }
    }

    int answer = INF;
    for (int u = 2; u <= N; u++)
        answer = min(answer, dp[(1 << N)-1][u]);

    cout << answer << endl;

    return 0;
}