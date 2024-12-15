#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    sort(points.begin(), points.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    });

    vector<long long> x_pre(N);
    vector<long long> x_suf(N);

    long long sum_x = 0;
    for (int i = 0; i < N; i++) {
        sum_x = (sum_x + points[i].first) % MOD;
        x_pre[i] = sum_x;
    }

    sum_x = 0;
    for (int i = N - 1; i >= 0; i--) {
        sum_x = (sum_x + points[i].first) % MOD;
        x_suf[i] = sum_x;
    }

    sort(points.begin(), points.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    vector<long long> y_pre(N);
    vector<long long> y_suf(N);

    long long sum_y = 0;
    for (int i = 0; i < N; i++) {
        sum_y = (sum_y + points[i].second) % MOD;
        y_pre[i] = sum_y;
    }

    sum_y = 0;
    for (int i = N - 1; i >= 0; i--) {
        sum_y = (sum_y + points[i].second) % MOD;
        y_suf[i] = sum_y;
    }

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        long long dx = (x_pre[i] - x_suf[i] + points[i].first + MOD) % MOD;
        long long dy = (y_pre[i] - y_suf[i] + points[i].second + MOD) % MOD;
        long long cnt = (dx * dy) % MOD;
        ans = (ans + cnt) % MOD;
    }

    cout << ans << endl;

    return 0;
}