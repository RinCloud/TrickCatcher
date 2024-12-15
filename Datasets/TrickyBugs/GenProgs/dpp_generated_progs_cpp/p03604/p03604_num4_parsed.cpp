#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int powmod(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = 1LL * res * a % MOD;
        a = 1LL * a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> balls(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        cin >> balls[i].first >> balls[i].second;
    }
    
    sort(balls.begin(), balls.end());
    
    int cnt = 0;
    vector<int> fact(2 * N + 1);
    fact[0] = 1;
    for (int i = 1; i <= 2 * N; i++) {
        fact[i] = 1LL * fact[i - 1] * i % MOD;
    }
    
    vector<int> inv(2 * N + 1);
    inv[2 * N] = powmod(fact[2 * N], MOD - 2);
    for (int i = 2 * N - 1; i >= 0; i--) {
        inv[i] = 1LL * inv[i + 1] * (i + 1) % MOD;
    }
    
    for (int i = 0; i < N; i++) {
        if (balls[i].second > balls[N].second) cnt++;
    }
    
    int ans = 1LL * fact[2 * N] * (N - cnt) % MOD;
    if (cnt == 0) {
        ans = (ans + 1LL * fact[2 * N] * (N + 1) % MOD * inv[2]) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}