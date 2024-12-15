#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int MOD = 998244353;

    int N;
    cin >> N;

    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = make_pair(x, y);
    }

    sort(points.begin(), points.end());

    vector<int> dp(N, 1);
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (points[i].second > points[j].second) {
                dp[i] = (dp[i] + dp[j]) % MOD;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum = (sum + dp[i]) % MOD;
    }

    cout << sum << endl;

    return 0;
}