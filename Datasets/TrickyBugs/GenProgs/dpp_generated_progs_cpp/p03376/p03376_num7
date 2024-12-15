#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    vector<int> m(N+1);
    vector<int> p(N+1);

    for (int i = 1; i <= N; i++) {
        cin >> m[i] >> p[i];
    }

    vector<long long> dp(N+1, 0);
    vector<long long> sum(N+1, 0);

    for (int i = 1; i <= N; i++) {
        sum[i] = sum[p[i]] + m[i];
    }

    for (int i = 1; i <= N; i++) {
        dp[i] = dp[i-1] + m[i];
        int l = i;
        int r = i;
        long long Moto = X - sum[i];

        while (l > 0 && r <= N) {
            Moto += m[l];
            long long num = Moto / D;
            dp[i] = max(dp[i], dp[l-1] + num * D);
            r++;
            l = p[r];
        }
    }

    cout << dp[N] << endl;

    return 0;
}