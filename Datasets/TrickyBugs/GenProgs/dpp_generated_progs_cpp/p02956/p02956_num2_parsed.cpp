#include <iostream>
#include <vector>
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
    
    sort(points.begin(), points.end());
    
    vector<int> factor(N + 1, 1);
    for (int i = 1; i <= N; i++) {
        factor[i] = (int)((long long)factor[i - 1] * i % MOD);
    }
    
    vector<int> prefix(N, 0);
    for (int i = 1; i < N; i++) {
        prefix[i] = prefix[i - 1] + points[i].second;
        prefix[i] %= MOD;
    }
    
    vector<int> suffix(N, 0);
    for (int i = N - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + points[i].second;
        suffix[i] %= MOD;
    }
    
    int ans = 0;
    for (int i = 0; i < N; i++) {
        long long cnt = (long long)(i + 1) * (N - i) % MOD;
        cnt = cnt * factor[i + 1] % MOD;
        cnt = cnt * factor[N - i - 1] % MOD;
        cnt = cnt * prefix[i] % MOD;
        cnt = cnt * suffix[i] % MOD;
        ans += cnt;
        ans %= MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}