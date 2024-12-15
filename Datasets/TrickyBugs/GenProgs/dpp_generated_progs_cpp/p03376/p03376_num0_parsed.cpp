#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;
    vector<int> m(N+1), p(N+1);

    for (int i = 1; i <= N; i++) {
        cin >> m[i] >> p[i];
    }

    vector<long long> dp(N+1, -1);
    dp[1] = X / m[1];
    long long ans = dp[1];

    for (int i = 2; i <= N; i++) {
        vector<long long> tmp(N+1, -1);
        for (int j = 0; j <= N; j++) {
            if (dp[j] == -1) continue;
            long long limit = dp[j] * (p[i] + 1) + (p[i] - j) * D;
            for (int k = j; k <= p[i] && m[i] * k <= limit; k++) {
                tmp[k] = max(tmp[k], dp[j] + min((limit - m[i] * k) / m[1], dp[1]));
            }
        }
        swap(dp, tmp);
        ans = max(ans, *max_element(dp.begin(), dp.end()));
    }

    cout << ans << endl;

    return 0;
}