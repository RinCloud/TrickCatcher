#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
const ll mod = 998244353;

ll modpow(ll x, ll y) {
    ll res = 1;
    while (y > 0) {
        if (y & 1) {
            res = (res * x) % mod;
        }
        x = (x * x) % mod;
        y >>= 1;
    }
    return res;
}

ll modinv(ll x) {
    return modpow(x, mod - 2);
}

int main() {
    int N;
    cin >> N;
    vector<ll> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    
    ll S = 0;
    for (int i = 0; i < N; i++) {
        S += A[i];
    }
    
    vector<ll> P(S + 1, 0);
    P[0] = 1;
    for (int i = 0; i < N; i++) {
        vector<ll> newP(S + 1, 0);
        for (int j = 0; j <= S; j++) {
            if (P[j] == 0) continue;
            for (int k = 0; k <= A[i] && j + k <= S; k++) {
                ll coeff = (P[j] * modinv(A[i])) % mod;
                ll power = (k * (k - 1) / 2) % (mod - 1);
                newP[j + k] = (newP[j + k] + (coeff * modpow(k + 1, B[i]) % mod) * modpow(B[i] + 1, power) % mod) % mod;
            }
        }
        P = newP;
    }
    
    ll res = 0;
    for (int i = 0; i <= S; i++) {
        res = (res + P[i] * i) % mod;
    }
    
    cout << res << endl;
    
    return 0;
}