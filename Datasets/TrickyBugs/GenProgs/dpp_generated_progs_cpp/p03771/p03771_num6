#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, V;
    cin >> N >> V;
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    vector<int> dp(N, 0);
    dp[0] = V;

    for (int i = 1; i < N; i++) {
        int dist = abs(x[i] - x[i - 1]);
        if (dist > dp[i - 1]) {
            cout << "Impossible" << endl;
            return 0;
        }
        int remaining = dp[i - 1] - dist;
        dp[i] = min(remaining + (dist % 2), V);
    }

    for (int i = N - 2; i >= 0; i--) {
        int dist = abs(x[i + 1] - x[i]);
        dp[i] = min(dp[i], min(dist, dp[i + 1] + 1));
    }

    for (int i = 0; i < N; i++) {
        cout << "Possible" << endl;
    }

    return 0;
}