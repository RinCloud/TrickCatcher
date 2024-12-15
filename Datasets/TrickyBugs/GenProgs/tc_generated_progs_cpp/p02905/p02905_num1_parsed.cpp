#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MOD = 998244353;
const ll V = 1000000;

int main() {
  ll N;
  cin >> N;
  vector<ll> A(V + 1, 0);
  
  for (ll i = 0; i < N; ++i) {
    ll a;
    cin >> a;
    ++A[a];
  }

  vector<ll> Inv(V + 1, 1);
  for (ll i = 2; i <= V; ++i) {
    Inv[i] = MOD - (MOD / i) * Inv[MOD % i] % MOD;
    assert(Inv[i] * i % MOD == 1);
  }

  vector<ll> W(V + 1, 0);
  for (ll i = 1; i <= V; ++i) W[i] = Inv[i];
  
  for (ll i = 1; i <= V; ++i) {
    for (ll k = 2 * i; k <= V; k += i) W[k] += MOD - W[i];
  }
  
  ll R = 0;
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
