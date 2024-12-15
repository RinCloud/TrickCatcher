#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

typedef long long ll;

ll inv(ll a){
    ll n = mod-2, ans = 1;
    while(n > 0){
        if(n % 2) ans = ans * a % mod;
        n = n / 2;
        a = a * a % mod;
    }
    return ans;
}

ll nCr(ll n, ll r){
  ll ans = 1;
  for(int i = 0; i < r; i++) {
      ans = ans * (n-i) % mod * inv(i+1) % mod;
  }
  return ans;
}

int main(){
  int n, m, k;
  cin >> n >> m >> k;

  ll ans = 0;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        ans = (ans + i + j) % mod;
    }
  }

  ll a = ans;
  ll b = ans;

  for(int i = 0; i < n-1; i++){
    b = (b + m * (i+1) - m * (n-i-1) + mod) % mod;
    a = (a + b) % mod;
  }

  b = a;

  for(int i = 0; i < m-1; i++){
    b = (b + n * n * (i+1) - n * n * (m-i-1) + mod) % mod;
    a = (a + b) % mod;
  }

  ans = (nCr(k, 2) * nCr(n * m, k)) % mod;
  ans = (a * ans) % mod;
  ll x = (ll)(n * m) * (n * m - 1) % mod;

  cout << ans * inv(x) % mod;

  return 0;
}
