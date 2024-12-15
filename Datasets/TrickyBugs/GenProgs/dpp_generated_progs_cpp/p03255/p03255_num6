#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    vector<int> dp(N + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            dp[i] = min(dp[i], dp[j] + (x[i - 1] - x[j] + X) * (x[i - 1] - x[j] + X));
        }
    }

    cout << dp[N] << endl;

    return 0;
}