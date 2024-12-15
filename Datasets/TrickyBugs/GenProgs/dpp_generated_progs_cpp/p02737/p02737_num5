#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> X(N+1), Y(N+1), Z(N+1);

    int M1, M2, M3;

    cin >> M1;

    for (int i = 0; i < M1; i++) {
        int a, b;
        cin >> a >> b;
        X[a].push_back(b);
        X[b].push_back(a);
    }

    cin >> M2;

    for (int i = 0; i < M2; i++) {
        int c, d;
        cin >> c >> d;
        Y[c].push_back(d);
        Y[d].push_back(c);
    }

    cin >> M3;

    for (int i = 0; i < M3; i++) {
        int e, f;
        cin >> e >> f;
        Z[e].push_back(f);
        Z[f].push_back(e);
    }

    vector<vector<long long>> dp(N+1, vector<long long>(N+1, 0));

    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        dp[i][0] = (dp[i-1][0] * 2) % MOD;
    }

    for (int j = 1; j <= N; j++) {
        dp[0][j] = (dp[0][j-1] * 2) % MOD;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
        }
    }

    long long answer = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                long long weight = 1;
                weight = (weight * dp[i-1][j-1]) % MOD;
                weight = (weight * dp[j-1][k-1]) % MOD;
                weight = (weight * dp[k-1][i-1]) % MOD;
                for (int u : X[i]) {
                    weight = (weight * (1 - dp[j-1][k-1]) + MOD) % MOD;
                }
                for (int u : Y[j]) {
                    weight = (weight * (1 - dp[i-1][k-1]) + MOD) % MOD;
                }
                for (int u : Z[k]) {
                    weight = (weight * (1 - dp[i-1][j-1]) + MOD) % MOD;
                }
                answer = (answer + weight) % MOD;
            }
        }
    }

    cout << answer << endl;

    return 0;
}