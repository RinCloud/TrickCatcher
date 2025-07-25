#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(n);++i)

const int MAX = 2e5 + 5;

int main() {
  int n, p, t[MAX], freq[MAX];
  string s;
  cin >> n >> p >> s;

  ll ans = 0;
  if (10 % p == 0) {
    rep(i,n) if ((s[i]-'0') % p == 0) ans += i+1;
  } else {
    reverse(s.begin(), s.end());
    int pw = 1;
    int cur = 0;

    freq[0] = 1;
    for(int i = 0; i < n; i++) {
      int d = s[i] - '0';
      cur = (cur + (pw * d) % p) % p;
      ans += freq[cur];
      freq[cur]++;
      pw = pw * 10 % p;
    }
  }

  cout << ans << endl;
  return 0;
}
