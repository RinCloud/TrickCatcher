#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 998244353

using namespace std;

typedef long long ll;

ll modular_add(ll a, ll b) {
    return (a + b) % MOD;
}

ll modular_mult(ll a, ll b) {
    return (a * b) % MOD;
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    sort(points.begin(), points.end());

    ll ans = 0;

    for (int i = 0; i < N; i++) {
        ll x1 = points[i].first;
        ll y1 = points[i].second;

        ll x2_max = -1e9;
        ll y2_max = -1e9;

        ll cnt = 0;

        for (int j = i; j < N; j++) {
            x2_max = max(x2_max, points[j].first);
            y2_max = max(y2_max, points[j].second);

            cnt++;

            ll f_T = modular_mult(cnt, modular_mult((x2_max - x1 + 1), (y2_max - y1 + 1)));
            ans = modular_add(ans, f_T);
        }
    }

    cout << ans << endl;

    return 0;
}