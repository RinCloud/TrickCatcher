#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll N;
vector<ll> A;
const ll V = 1000000;
const ll MOD = 998244353;
vector<ll> Inv;
vector<ll> W;
ll R;

int main() {
  cin >> N;
  A.resize(V + 1);
  for (ll i = 0; i < N; ++i) {
    ll a;
    cin >> a;
    ++A[a];
  }

  Inv.resize(V + 1);
  Inv[1] = 1;
  for (ll i = 2; i <= V; ++i) {
    Inv[i] = MOD - (MOD / i) * Inv[MOD % i] % MOD;
    assert(Inv[i] * i % MOD == 1);
  }

  W.resize(V + 1);
  for (ll i = 1; i <= V; ++i) W[i] = Inv[i];
  for (ll i = 1; i <= V; ++i) {
    for (ll k = 2 * i; k <= V; k += i) W[k] = (W[k] + MOD - W[i]) % MOD;
  }
  for (ll i = 1; i <= V; ++i) {
    ll sum = 0, sum2 = 0;
    for (ll k = i; k <= V; k += i) {
      (sum += A[k] * k) %= MOD;
      (sum2 += A[k] * (k * k % MOD)) %= MOD;
    }
    ll prodsum = (sum * sum + MOD - sum2) % MOD * Inv[2] % MOD;
    (R += W[i] * prodsum % MOD) %= MOD;
  }
  cout << R << endl;

  return 0;
}
