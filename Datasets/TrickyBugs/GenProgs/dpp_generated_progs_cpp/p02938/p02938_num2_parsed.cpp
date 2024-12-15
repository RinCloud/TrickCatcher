#include <iostream>
typedef long long ll;
const ll mod = 1e9 + 7;

ll countPairs(ll L, ll R) {
    ll ans = 0;
    for (ll x = L; x <= R; x++) {
        for (ll y = x; y <= R; y += x) {
            if ((y % x) == (y ^ x)) {
                ans++;
            }
        }
    }
    return ans % mod;
}

int main() {
    ll L, R;
    std::cin >> L >> R;

    ll result = countPairs(L, R);
    std::cout << result << std::endl;

    return 0;
}