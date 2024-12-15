#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Edge {
    int from;
    int to;
    int weight;
};

int main() {
    int N, M;
    cin >> N >> M;

    vector<Edge> edges(M);
    for (int i = 0; i < M; i++) {
        cin >> edges[i].from >> edges[i].to >> edges[i].weight;
    }

    vector<long long> dp(N + 1, LLONG_MIN);
    dp[1] = 0;

    bool updated;
    for (int iter = 0; iter < N; iter++) {
        updated = false;
        for (const auto& edge : edges) {
            if (dp[edge.from] != LLONG_MIN && dp[edge.to] < dp[edge.from] + edge.weight) {
                dp[edge.to] = dp[edge.from] + edge.weight;
                updated = true;
            }
        }
        if (!updated) {
            break;
        }
    }

    if (updated) {
        cout << "inf" << endl;
    } else {
        cout << dp[N] << endl;
    }

    return 0;
}