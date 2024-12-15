#include <iostream>
#include <vector>

typedef long long ll;

const ll MOD = 998244353;

ll mod_pow(ll x, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) {
            res = (res * x) % mod;
        }
        x = (x * x) % mod;
        n >>= 1;
    }
    return res;
}

ll mod_inv(ll x, ll mod) {
    return mod_pow(x, mod - 2, mod);
}

ll calc_comb(ll n, ll r) {
    if (n < r) return 0;
    ll res = 1;
    for (ll i = 1; i <= r; ++i) {
        res = (res * (n - i + 1)) % MOD;
        res = (res * mod_inv(i, MOD)) % MOD;
    }
    return res;
}

int main() {
    ll N, A, B, K;
    std::cin >> N >> A >> B >> K;

    ll ans = 0;
    for (ll i = 0; i <= N; ++i) {
        // Calculate the beauty of the tower when
        // there are i layers painted red.
        ll beauty = K - (i * A);
        if (beauty < 0 || beauty % B != 0) {
            continue;
        }
        ll j = beauty / B;
        if (j > N || i + j != N) {
            continue;
        }

        // Count the number of ways to paint the tiles
        ll cnt = (calc_comb(N, i) * calc_comb(N - i, j)) % MOD;
        ans = (ans + cnt) % MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}