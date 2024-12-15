#include <iostream>
#define MOD 998244353

using namespace std;

typedef long long int ll;

ll dp[300005];
ll fact[300005];

ll power(ll x, ll n) {
    if (n == 0) {
        return 1;
    }
    ll ans = power(x, n/2);
    ans = (ans * ans) % MOD;
    if (n % 2 == 1) {
        ans = (ans * x) % MOD;
    }
    return ans;
}

ll inverse(ll x) {
    return power(x, MOD - 2);
}

ll nCr(ll n, ll r) {
    ll num = fact[n];
    ll den = (fact[r] * fact[n-r]) % MOD;
    ll ans = (num * inverse(den)) % MOD;
    return ans;
}

int main() {
    int N, A, B, K;
    cin >> N >> A >> B >> K;
    
    dp[0] = 1;
    fact[0] = 1;
    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
    }
    
    for (int i = 1; i <= N; i++) {
        ll mul = (fact[N-1] * inverse(fact[i-1])) % MOD;
        mul = (mul * inverse(fact[N-i])) % MOD;
        
        ll p = K - (A * i);
        if (p < 0) {
            break;
        }
        
        for (int j = 0; j <= p/B; j++) {
            ll q = p - (B * j);
            if (q < 0) {
                continue;
            }
            dp[i+j] = (dp[i+j] + (mul * nCr(N-i, j)) % MOD) % MOD;
        }
    }
    
    cout << dp[N] << endl;
    
    return 0;
}