#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int MOD = 998244353;

long long power(long long x, int y) {
    long long res = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        y /= 2;
    }
    return res;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> X(N + 1), Y(N + 1), Z(N + 1);
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

    unordered_map<long long, int> weight;
    long long ans = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (auto k : X[i]) {
                weight[1000000000000000000 * (i + j + k) % MOD]++;
            }
            for (auto k : Y[j]) {
                weight[1000000000000000000 * (i + j + k) % MOD]++;
            }
            for (auto k : Z[i]) {
                weight[1000000000000000000 * (i + j + k) % MOD]++;
            }
        }
    }

    for (auto it : weight) {
        ans = (ans + power(10, it.first) * it.second) % MOD;
    }

    cout << ans << endl;

    return 0;
}