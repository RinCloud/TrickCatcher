#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    sort(points.begin(), points.end());

    vector<int> cnt(N, 1);
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (points[i].second < points[j].second) {
                cnt[j] = (cnt[j] + cnt[i]) % MOD;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum = (sum + cnt[i]) % MOD;
    }

    cout << sum << endl;

    return 0;
}