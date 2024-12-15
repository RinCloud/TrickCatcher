#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    long long ans = 1e18;
    for (int k = 1; k <= N; k++) {
        vector<long long> dp(k + 1, 0);
        for (int i = 1; i <= N; i++) {
            dp[i % (k + 1)] = dp[(i - 1) % (k + 1)] + abs(x[i - 1] - x[i - 2]);
            for (int j = 1; i - j * (k + 1) >= 0; j++) {
                dp[i % (k + 1)] = min(dp[i % (k + 1)], dp[(i - j * (k + 1)) % (k + 1)] + X + j * j);
            }
        }
        ans = min(ans, dp[N % (k + 1)]);
    }
    
    cout << ans << endl;

    return 0;
}