#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define MOD 998244353

using namespace std;

struct Robot {
    int position;
    int distance;
};

int main() {
    int N;
    cin >> N;

    vector<Robot> robots(N);

    for (int i = 0; i < N; i++) {
        cin >> robots[i].position >> robots[i].distance;
    }

    sort(robots.begin(), robots.end(), [](const Robot& a, const Robot& b) {
        return a.position < b.position;
    });

    vector<int> dp(N);

    for (int i = N - 1; i >= 0; i--) {
        int maxCount = 0;

        for (int j = i + 1; j < N; j++) {
            if (robots[j].position < robots[i].position + robots[i].distance) {
                maxCount = max(maxCount, dp[j]);
            } else {
                break;
            }
        }

        dp[i] = (maxCount + (i < N - 1 ? dp[i + 1] : 1)) % MOD;
    }

    cout << accumulate(dp.begin(), dp.end(), 0LL) % MOD << endl;

    return 0;
}