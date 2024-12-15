#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> robots(N);
    for (int i = 0; i < N; i++) {
        cin >> robots[i].first >> robots[i].second;
    }

    sort(robots.begin(), robots.end());

    vector<int> dp(N + 1, 0);
    // dp[i] represents number of possible sets of robots remaining after considering first i robots

    dp[N] = 1;
    for (int i = N - 1; i >= 0; i--) {
        int j = i + 1;
        // Find the first robot that overlaps with or is to the right of current robot
        while (j < N && robots[j].first < robots[i].first + robots[i].second) {
            j++;
        }

        dp[i] = (2 * dp[i + 1]) % MOD;
        if (j < N && robots[j].first == robots[i].first + robots[i].second) {
            dp[i] = (dp[i] + dp[j]) % MOD;
        }
    }

    cout << dp[0] << endl;

    return 0;
}