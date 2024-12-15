#include <iostream>
#include <vector>
#include <cassert>

typedef long long ll;

ll N;
const ll V = 1000000;
const ll MOD = 998244353;

std::vector<ll> Inv(V + 1);
std::vector<ll> W(V + 1);
ll R;

int main() {
  std::cin >> N;
  std::vector<ll> A(N);
  for (ll i = 0; i < N; ++i) {
    std::cin >> A[i];
  }

  std::vector<ll> cnt(V + 1);
  for (ll i = 0; i < N; ++i) {
    ++cnt[A[i]];
  }

  Inv[1] = 1;
  for (ll i = 2; i <= V; ++i) {
    Inv[i] = MOD - (MOD / i) * Inv[MOD % i] % MOD;
    assert(Inv[i] * i % MOD == 1);
  }

  W[1] = Inv[1];
  for (ll i = 2; i <= V; ++i) {
    W[i] = Inv[i];
    for (ll j = 2 * i; j <= V; j += i) {
      W[j] += MOD - W[i];
      W[j] %= MOD;
    }
  }

  for (ll i = 1; i <= V; ++i) {
    ll sum = 0, sum2 = 0;
    for (ll j = i; j <= V; j += i) {
      (sum += cnt[j] * j) %= MOD;
      (sum2 += cnt[j] * (j * j % MOD)) %= MOD;
    }
    ll prodsum = (sum * sum + MOD - sum2) % MOD * Inv[2] % MOD;
    (R += W[i] * prodsum % MOD) %= MOD;
  }
  std::cout << R << "\n";

  return 0;
}
