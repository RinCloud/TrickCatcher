#include <iostream>
#include <vector>

typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    ll L = 1;
    for (int i = 0; i < N; i++) {
        L = lcm(L, A[i] / 2);
        if (L > M) {
            std::cout << 0 << std::endl;
            return 0;
        }
    }

    ll res = M / L;
    if (L * res != M) {
        res--;
    }

    std::cout << res << std::endl;
    return 0;
}