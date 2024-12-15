#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> X(N+1), Y(N+1), Z(N+1);

    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        X[a].push_back(b);
        X[b].push_back(a);
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        Y[a].push_back(b);
        Y[b].push_back(a);
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        Z[a].push_back(b);
        Z[b].push_back(a);
    }

    vector<vector<vector<long long>>> dp(N+1, vector<vector<long long>>(N+1, vector<long long>(N+1, 0)));
    dp[0][0][0] = 1;

    for (int x = 0; x <= N; x++) {
        for (int y = 0; y <= N; y++) {
            for (int z = 0; z <= N; z++) {
                if (x > 0) {
                    for (int w = 0; w < y; w++) {
                        for (int l = 0; l < z; l++) {
                            dp[x][y][z] += dp[x-1][w][l];
                            dp[x][y][z] %= MOD;
                        }
                    }
                }
                if (y > 0) {
                    for (int w = 0; w < x; w++) {
                        for (int l = 0; l < z; l++) {
                            dp[x][y][z] += dp[w][y-1][l];
                            dp[x][y][z] %= MOD;
                        }
                    }
                }
                if (z > 0) {
                    for (int w = 0; w < x; w++) {
                        for (int l = 0; l < y; l++) {
                            dp[x][y][z] += dp[w][l][z-1];
                            dp[x][y][z] %= MOD;
                        }
                    }
                }
            }
        }
    }

    long long ans = 0;
    for (int x = 1; x <= N; x++) {
        for (int y = 1; y <= N; y++) {
            for (int z = 1; z <= N; z++) {
                long long weight = pow(1000000000000000000 % MOD, (x + y + z)) % MOD;
                ans += weight * dp[x][y][z];
                ans %= MOD;
            }
        }
    }

    cout << ans << endl;

    return 0;
}