#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

typedef long long ll;

struct Event {
    ll t;
    int d;
    int x;
};

const ll INF = 1LL << 60;

int main() {
    int N;
    ll X;
    cin >> N >> X;

    vector<ll> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    vector<Event> events;
    events.push_back({0, -1, 0});
    for (int i = 0; i < N; i++) {
        events.push_back({abs(x[i] - x[i-1]), i, x[i]});
    }

    sort(events.begin(), events.end(), [](const Event& a, const Event& b) {
        return a.t < b.t;
    });

    vector<ll> dp(N+1, INF);
    dp[0] = 0;

    for (int i = 1; i <= N; i++) {
        ll t = events[i].t;
        int d = events[i].d;
        int x = events[i].x;

        if (d == -1) {
            dp[i] = min(dp[i], dp[i-1] + X * t);
        } else {
            dp[i] = min(dp[i], dp[i-1] + X * (t + 2 * d + 1));
            dp[i] = min(dp[i], dp[i-d] + X * (t + 2 * (d + 1)));
        }
    }

    cout << dp[N] << endl;

    return 0;
}