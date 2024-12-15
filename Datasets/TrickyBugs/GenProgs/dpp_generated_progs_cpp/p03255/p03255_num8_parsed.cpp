#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    vector<ll> dp(N + 1, 1e18);
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= i + 1; j++) {
            int numTrash = i - j + 1;
            int dist = x[i] - x[i - numTrash + 1];
            dp[i + 1] = min(dp[i + 1], dp[i - numTrash] + X + (ll)(numTrash + 1) * (numTrash + 1) + (ll)dist * dist);
        }
    }

    cout << dp[N] << endl;

    return 0;
}