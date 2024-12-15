#include <iostream>
#include <vector>
#include <unordered_set>

const int MOD = 998244353;
const long long int BASE = 1000000000000000000LL;

int main() {
    int N;
    std::cin >> N;

    std::vector<std::vector<int>> X(N + 1), Y(N + 1), Z(N + 1);
    std::vector<std::vector<long long int>> W(N + 1, std::vector<long long int>(N + 1, 0));

    int M1;
    std::cin >> M1;
    for (int i = 0; i < M1; i++) {
        int a, b;
        std::cin >> a >> b;
        X[a].push_back(b);
        X[b].push_back(a);
    }

    int M2;
    std::cin >> M2;
    for (int i = 0; i < M2; i++) {
        int c, d;
        std::cin >> c >> d;
        Y[c].push_back(d);
        Y[d].push_back(c);
    }

    int M3;
    std::cin >> M3;
    for (int i = 0; i < M3; i++) {
        int e, f;
        std::cin >> e >> f;
        Z[e].push_back(f);
        Z[f].push_back(e);
    }

    for (int i = 1; i <= N; i++) {
        for (int j : X[i]) {
            for (int k : Z[i]) {
                W[i][j] += BASE;
                W[i][k] += BASE;
                W[j][i] += BASE;
                W[k][i] += BASE;
                W[j][k] += BASE;
                W[k][j] += BASE;
            }
        }
        for (int j : Y[i]) {
            for (int k : Z[i]) {
                W[i][j] += BASE;
                W[i][k] += BASE;
                W[j][i] += BASE;
                W[k][i] += BASE;
                W[j][k] += BASE;
                W[k][j] += BASE;
            }
        }
    }

    std::vector<long long int> maxWeight(N + 1, 0);
    maxWeight[1] = BASE;

    for (int i = 2; i <= N; i++) {
        maxWeight[i] = (maxWeight[i] + maxWeight[i - 1]) % MOD;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            W[i][j] = maxWeight[W[i][j] % (N + 1)];
        }
    }

    std::vector<std::vector<long long int>> dp(N + 1, std::vector<long long int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        long long int sum = 0;
        for (int j = 0; j <= N; j++) {
            sum += dp[i - 1][j];
            sum %= MOD;
            dp[i][j] = sum;
        }
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                dp[i][j] += (dp[i - 1][j - 1] * W[j][k]) % MOD;
                dp[i][j] %= MOD;
            }
        }
    }

    long long int ans = 0;
    for (int i = 0; i <= N; i++) {
        ans += dp[N][i];
        ans %= MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}